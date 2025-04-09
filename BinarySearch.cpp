//Effect: O(n) - > O(log n) by binary search
#include <iostream>
using namespace std;


int binarySearch(int arr[], int target, int arraySize)
{
    int low, mid, high, value;
    low = 0;
    high = arraySize - 1;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        //for counting executing
        cout << "Now Checking: " << mid << endl;
        value = arr[mid];
    
        if (value > target)
        {
            high = mid - 1;
        }
        else if (value < target)
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }
    }



    return -1;
}





int main(){
    int arr[100], target,index;
    int arraySize = sizeof(arr) / sizeof(arr[0]);
    cout << "The Number you want to Search: \n";
    cin >> target;


    for (int i = 0; i < arraySize ; i++)
    {
        arr[i]  = i * 2;
    }

    index = binarySearch(arr, target, arraySize);
    if (index == -1)
    cout << "Number not found!\n";
    else
    cout << "The number is in array[" << index << "]\n";



    return 0;
}