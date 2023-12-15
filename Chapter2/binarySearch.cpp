#include <iostream>
using namespace std;

void binarySearch(int arr[], int size, int toSearch)
{
    // lower bound
    int l = 0;
    // upper bound
    int u = size - 1;
    // flag value
    bool flag = false;
    // to save the index of the element
    int index;
    // loop will terminate when l>u
    while (l <= u)
    {
        // finding the mid element so that the array will be divided accordingly
        int mid = (l + u) / 2;
        // searching for the element if found save the index and mark the flag then break it
        if (arr[mid] == toSearch)
        {
            flag = true;
            index = mid;
            break;
        }
        // if the value to be searched is greater than change the lower bound
        if (arr[mid] < toSearch)
        {
            l = mid + 1;
        }
        // else change the upper bound
        else
        {
            u = mid - 1;
        }
    }
    // finally printing the final result
    if (flag)
    {
        cout << "The element is found at index " << index << endl;
    }
    else
    {
        cout << "Element is not found." << endl;
    }
}
int main()
{
    int arr[] = {1, 5, 3, 7, 6, 9, 4, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    binarySearch(arr, size, 576);
}