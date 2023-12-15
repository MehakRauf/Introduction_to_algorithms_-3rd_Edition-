#include <iostream>
using namespace std;

void recursiveinsertionsort(int arr[], int size, int i)
{
    // base case
    if (i >= size)
    {
        return;
    }
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
    // now finally placing it on its location
    arr[gap + 1] = hold;
    // calling the function recursively
    recursiveinsertionsort(arr, size, i + 1);
}

int main()
{
    int arr[] = {1, 5, 3, 7, 6, 9, 4, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    recursiveinsertionsort(arr, size, 1);
    cout << "The array after sorting is: " << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
}