#include <iostream>
using namespace std;

int binarySearchRec(int arr[], int toSearch, int l, int u)
{
    // base case
    if (l > u)
    {
        // when the element is not found
        return l;
    }
    // taking the mid point
    int mid = (l + u) / 2;
    // searching for the element
    if (arr[mid] == toSearch)
    {
        // when the element is found
        return mid;
    }
    // making calls accordingly
    if (arr[mid] < toSearch)
    {
        binarySearchRec(arr, toSearch, mid + 1, u);
    }
    else
    {
        binarySearchRec(arr, toSearch, l, mid - 1);
    }
}
void insertionSort(int arr[], int size)
{
    // loop will start from second element as we are considering the first element as already sorted
    for (int i = 1; i < size; i++)
    {
        // taking elements one by one
        int hold = arr[i];
        // iterating the sorted part
        int gap = i - 1;
        // checking the position to find it is required to be sorted or not
        int pos = binarySearchRec(arr, hold, 0, gap);
        // loop will run until it founds it suitable position
        while (gap >= pos)
        {
            // changes the values accordingly
            arr[gap + 1] = arr[gap];
            // decreases the value
            gap--;
        }
        // now finally placingit on its location
        arr[gap + 1] = hold;
    }
}
int main()
{
    int arr[] = {1, 5, 3, 7, 6, 9, 4, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size << endl;
    insertionSort(arr, size);
    // printing the elements after sorting them
    cout << "The array after sorting is: " << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
}