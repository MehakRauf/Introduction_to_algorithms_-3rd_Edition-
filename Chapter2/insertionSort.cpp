#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
    // loop will start from second element as we are considering the first element as already sorted
    for (int i = 1; i < size; i++)
    {
        // taking elements one by one
        int hold = arr[i];
        // iterating the sorted part
        int gap = i - 1;
        // loop will run until it founds it suitable position
        while (gap >= 0 && hold < arr[gap])
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