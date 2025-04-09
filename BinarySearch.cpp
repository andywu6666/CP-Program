//Effect: O(n) - > O(log n) by binary search
#include <iostream>
#include <vector>
using namespace std;


int binarySearch(vector<int> arr[], int target)
{
    int low, mid, high, value;
    low = arr[0];
    high = arr[arr.size() - 1];
    if (low <= high)
    {
        mid = low + (low + high) / 2;
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
    vector<int> arr[100];
    int target, index;
    cout << "The Number you want to Search: \n";
    cin >> target;


    for (int i = 0; i < arr.size()  ; i++)
    {
        arr[i]  = i;
    }

    index = binarySearch(arr, target);
    if (index == -1)
    cout << "Number not found!\n";

    cout << "The number is in array[" << index << "]\n";



    return 0;
}