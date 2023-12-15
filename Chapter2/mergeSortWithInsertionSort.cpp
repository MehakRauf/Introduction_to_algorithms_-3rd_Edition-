#include <iostream>
using namespace std;

void merge(int A[], int p, int q, int r)
{
    // taking a new array for merging the elements
    int merged[r - p + 1];
    // index for iterating the first half
    int idx1 = p;
    // index for iterating the second half
    int idx2 = q + 1;
    // index to iterate the merged array
    int x = 0;
    // loop will run when both conditions are true
    while (idx1 <= q && idx2 <= r)
    {
        // merging the elements by comparing
        if (A[idx1] <= A[idx2])
        {
            merged[x++] = A[idx1++];
        }
        else
        {
            merged[x++] = A[idx2++];
        }
    }
    // from both the loops either one of them is executed
    // if any element is left will be placed
    while (idx1 <= q)
    {
        merged[x++] = A[idx1++];
    }
    // if any element is left will be placed
    while (idx2 <= r)
    {
        merged[x++] = A[idx2++];
    }
}
void insertionSort(int arr[], int p, int r)
{
    // loop will start from second element as we are considering the first element as already sorted
    for (int i = p + 1; i < r; i++)
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
void MergeSort(int A[], int p, int r)
{
    if (p < r)
    {
        // using insertion sort for smaller subsequences of length less than or equal to 4
        if (r - p <= 4)
        {
            insertionSort(A, p, r);
        }
        else
        {
            // dividing the array in subsequences
            int q = (p + r) / 2;
            MergeSort(A, p, q);
            MergeSort(A, q + 1, r);
            // merging the arrays
            merge(A, p, q, r);
        }
    }
}
int main()
{
    int A[] = {2, 4, 3, 6, 9, 0, 8};
    MergeSort(A, 0, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << A[i] << " ";
    }
}