#include <iostream>
using namespace std;

// binary search using recursion
bool binarySearchRec(int arr[], int toSearch, int l, int u)
{
    // base case
    if (l > u)
    {
        return false;
    }
    // finding the mid
    int mid = (l + u) / 2;
    // comparing the element
    if (arr[mid] == toSearch)
    {
        return true;
    }
    // changing the lower and upper bound accordingly
    if (arr[mid] < toSearch)
    {
        // calling the function with updating the lower bound
        binarySearchRec(arr, toSearch, mid + 1, u);
    }
    else
    {
        // calling the function with updating the upper bound
        binarySearchRec(arr, toSearch, l, mid - 1);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    if (binarySearchRec(arr, 6, 0, size - 1))
    {
        cout << "The element is found" << endl;
    }
    else
    {
        cout << "The element is not found" << endl;
    }
}