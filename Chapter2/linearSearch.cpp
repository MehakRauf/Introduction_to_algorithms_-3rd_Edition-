#include <iostream>
using namespace std;

void linearSearch(int arr[], int size, int toSearch)
{
    bool flag = false;
    int index;
    // checking every element one by one
    for (int i = 0; i < size; i++)
    {
        // if element is found keep the index and break it
        if (arr[i] == toSearch)
        {
            index = i;
            flag = true;
            break;
        }
    }
    // if element is not found
    if (!flag)
    {
        cout << "Elemenet is not found." << endl;
    }
    // else if found
    else
    {
        cout << "Element is found at index: " << index << endl;
    }
}
int main()
{
    int arr[] = {1, 4, 3, 6, 5, 89, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    linearSearch(arr, size, 3);
}