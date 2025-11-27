#include<opencv2/opencv.hpp> 
#include<iostream> 
#include<String> 
#include <vector>
using namespace std;
using namespace cv;

struct SignBox {
	int x1, y1, x2, y2;
};


int main(int argc, char* argv[])
{
	if (argc != 2) {
		cout << "Usage: display_image ImageToLoadAndDisplay" << endl;
		return -1;
	}


	String image_path = argv[1];
	//String image_path = "public1.jpg";
	
	//Step2: BGR to HSV
	Mat img = imread(image_path, IMREAD_COLOR);
	Mat img_hsv;

	if (img.empty()) {
		cout << "Couldn't read the img: " << image_path << endl;
		return 1;
	}
	cvtColor(img, img_hsv, COLOR_BGR2HSV);

	vector<SignBox> all_signs;
	Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));
	vector<vector<Point>> contours;
	vector<Vec4i> hierarchy;

	//Step 3: display the yellow parts using inRange function
	Mat mask_yellow;
	inRange(img_hsv, Scalar(20, 100, 100), Scalar(35, 255, 255), mask_yellow);

	//step 4: Morphological opening
	morphologyEx(mask_yellow, mask_yellow, MORPH_OPEN, kernel);

	//Step 5: find contours
	findContours(mask_yellow, contours, hierarchy , RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);

	//Step 5-2: draw contours
	for (size_t i = 0; i < contours.size(); i++) {
	//	drawContours(img, contours, (int)i, Scalar(0, 0, 255), 2, LINE_8, hierarchy, 0); // for debugging
		double area = contourArea(contours[i]);
		//if (area < 500 || area > 2500) continue; // filter small areas

		Rect bounding_box = boundingRect(contours[i]);

		SignBox sign;
		sign.x1 = bounding_box.tl().x;
		sign.y1 = bounding_box.tl().y;
		sign.x2 = bounding_box.br().x;
		sign.y2 = bounding_box.br().y;
		all_signs.push_back(sign);

		rectangle(img, bounding_box.tl(), bounding_box.br(), Scalar(0, 255, 255), 2); // for debugging
	}

	//Step 6: display the blue parts using inRange function
	Mat mask_blue;
	inRange(img_hsv, Scalar(100, 100, 100), Scalar(130, 255, 255), mask_blue);

	morphologyEx(mask_blue, mask_blue, MORPH_OPEN, kernel);

	contours.clear();
	hierarchy.clear();
	findContours(mask_blue, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);

	for (size_t i = 0; i < contours.size(); i++) {
		//	drawContours(img, contours, (int)i, Scalar(0, 0, 255), 2, LINE_8, hierarchy, 0); // for debugging
		double area = contourArea(contours[i]);
		//if (area < 500 || area > 2500) continue; // filter small areas

		Rect bounding_box = boundingRect(contours[i]);

		SignBox sign;
		sign.x1 = bounding_box.tl().x;
		sign.y1 = bounding_box.tl().y;
		sign.x2 = bounding_box.br().x;
		sign.y2 = bounding_box.br().y;
		all_signs.push_back(sign);

		rectangle(img, bounding_box.tl(), bounding_box.br(),  Scalar(255, 0, 0), 2); // for debugging
	}



	Mat mask_red1, mask_red2, mask_red;

	inRange(img_hsv, Scalar(0, 100, 100), Scalar(10, 255, 255), mask_red1);

	inRange(img_hsv, Scalar(170, 100, 100), Scalar(180, 255, 255), mask_red2);

	bitwise_or(mask_red1, mask_red2, mask_red);

	morphologyEx(mask_red, mask_red, MORPH_OPEN, kernel);

	contours.clear();
	hierarchy.clear();
	findContours(mask_red, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);


	for (size_t i = 0; i < contours.size(); i++) {
		double area = contourArea(contours[i]);
		//if (area < 500 || area > 2500) continue;

		Rect bounding_box = boundingRect(contours[i]);

		SignBox sign;
		sign.x1 = bounding_box.tl().x;
		sign.y1 = bounding_box.tl().y;
		sign.x2 = bounding_box.br().x;
		sign.y2 = bounding_box.br().y;
		all_signs.push_back(sign);

		rectangle(img, bounding_box.tl(), bounding_box.br(), Scalar(0, 0, 255), 2); // for debugging
	}

	


//	imshow("Display Window", mask_yellow);
	imshow("Display Window", img);
	waitKey(0);
	return 0;
}