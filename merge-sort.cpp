#include <iostream>
using namespace std;

void merge(int *arr, int l, int m, int r)
{
  int i, j, k;
  int n1 = m - l + 1;
  int n2 = r - m;
  cout << l << m << r << n1 << n2 << endl;

  int *L = new int[n1], *R = new int[n2];

  for (i = 0; i < n1; i++)
    L[i] = arr[l + i];

  for (j = 0; j < n2; j++)
    R[j] = arr[m + 1 + j];

  i = 0;
  j = 0;
  k = l;
  while (i < n1 || j < n2)
  {
    if (j >= n2 || (i < n1 && L[i] <= R[j]))
    {
      arr[k] = L[i];
      i++;
    }
    else
    {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  delete[] L;
  delete[] R;
}

void mergeSort(int *arr, int l, int r, int size)
{
  if (l < r)
  {
    int m = l + (r - l) / 2;
    cout << "left" << endl;
    mergeSort(arr, l, m, size);
    cout << "right" << endl;
    mergeSort(arr, m + 1, r, size);
    cout << "merge" << endl;
    merge(arr, l, m, r);
    for (int i = 0; i < size; i++)
      cout << arr[i] << " ";
    cout << endl;
  }
}

void show(int *arr, int size)
{
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << "\n";
}

int main()
{
  int size;
  cout << "Enter the number of elements : ";
  cin >> size;
  int *arr = new int[size];
  cout << "Enter the unsorted elements : ";
  for (int i = 0; i < size; ++i)
  {
    cin >> arr[i];
  }
  mergeSort(arr, 0, size - 1, size);
  cout << "Sorted array : ";
  show(arr, size);
  delete[] arr;
  return 0;
}
