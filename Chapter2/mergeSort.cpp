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
    // printing the final merged array after sorting
    int size = sizeof(merged) / sizeof(merged[0]);
    for (int i = 0, j = p; i < size; i++, j++)
    {
        A[j] = merged[i];
    }
}
void MergeSort(int A[], int p, int r)
{
    if (p < r)
    {
        // dividing the array in subsequences
        int q = (p + r) / 2;
        MergeSort(A, p, q);
        MergeSort(A, q + 1, r);
        // merging the arrays
        merge(A, p, q, r);
    }
}
int main()
{
    int A[] = {2, 4, 3, 6, 3, 9, 0};
    MergeSort(A, 0, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << A[i] << " ";
    }
}