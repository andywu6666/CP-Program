#include<opencv2/opencv.hpp> 
#include<iostream> 
#include<String> 
#include <vector>
using namespace std;
using namespace cv;
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

	

	//Step 3: display the yellow parts using inRange function
	Mat mask_yellow;
	inRange(img_hsv, Scalar(20, 100, 100), Scalar(35, 255, 255), mask_yellow);

	//step 4: Morphological opening
	Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));
	morphologyEx(mask_yellow, mask_yellow, MORPH_OPEN, kernel);

	//Step 5: find contours
	vector<vector<Point>> contours;
	vector<Vec4i> hierarchy;
	findContours(mask_yellow, contours, hierarchy , RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);

	//Step 5-2: draw contours
	for (size_t i = 0; i < contours.size(); i++) {
	//	drawContours(img, contours, (int)i, Scalar(0, 0, 255), 2, LINE_8, hierarchy, 0); // for debugging
		double area = contourArea(contours[i]);
		if (area < 500 || area > 2500) continue; // filter small areas

		Rect bounding_box = boundingRect(contours[i]);
		rectangle(img, bounding_box.tl(), bounding_box.br(),  Scalar(0, 255, 0), 2);
	}
	


//	imshow("Display Window", mask_yellow);
	imshow("Display Window", img);
	waitKey(0);
	return 0;
}