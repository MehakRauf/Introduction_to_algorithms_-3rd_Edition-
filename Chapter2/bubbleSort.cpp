#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    // outer loop
    for (int i = 0; i < size; i++)
    {
        // ineer loop to iterate each element one by one
        for (int j = 0; j < size - i + 1; j++)
        {
            // comparing the consecutive terms
            if (arr[j] > arr[j + 1])
            {
                // swapping the elements
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    int arr[] = {1, 5, 3, 7, 6, 9, 4, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}