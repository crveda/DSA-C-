#include <iostream>
using namespace std;

// Time Complexity of Binary Serach is logN;
// That is n/2 n/4 ---- n/2^k iteartins
// then taking n/2^k = 1 ; Take log on both sides;
//  LogN -> Time complexity of Binary Serach

int Binary(int arr[], int n, int key)
{
    int fir = 0;
    int last = n;
    while (fir <= last)
    {
        int midd = (fir + last) / 2;
        if (key == arr[midd])
            return 1;
        else if (key < arr[midd])
            last = midd - 1;
        else
            fir = midd + 1;
    }

    return 0;
}

void SelectionSort(int arr[], int n)
{
    int ind = 0;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[j] < arr[i])
    //         {
    //             int temp = arr[j];
    //             arr[j] = arr[i];
    //             arr[i] = temp;
    //         }
    //     }
    // }
    for (int i = 0; i < n - 1; i++)
    {
        ind = i;
        for (int j = (i + 1); j < n; j++)
        {
            if (arr[ind] > arr[j])
                ind = j;
        }
        int tmp = arr[ind];
        arr[ind] = arr[i];
        arr[i] = tmp;
    }
}
// SelectionSort
//  9 3 10 2 7
//  [9]->[i]  [j-> starts] 3  10  2  7
//  at start considering minInd->0 is minmum element
//  compare if arr[j] < arr[minInd] if yes,
//  then minInd = j;
//  after 1 iteartins
//  swap arr[i] with arr[minInd]

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void InsertionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

void Merge(int arr[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = left;
    int b[right];
    while (i <= mid && j <= right)
    {
        if (arr[i] < arr[j])
        {
            b[k] = arr[i];
            i++;
        }
        else
        {
            b[k] = arr[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        while (j <= right)
        {
            b[k] = arr[j];
            k++;
            j++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = arr[i];
            k++;
            i++;
        }
    }
    for (k = left; k <= right; k++)
        arr[k] = b[k];
}

void MergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);

        Merge(arr, left, mid, right);
    }
}

int Partition(int arr[], int left, int right)
{
    int pivot = arr[left];
    int i = left;
    int j = right;
    while (i < j)
    {
        while (arr[i] <= pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[j];
    arr[j] = arr[left];
    arr[left] = temp;
    return j;
}

void QuickSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int pivot = Partition(arr, left, right);

        QuickSort(arr, left, pivot - 1);
        QuickSort(arr, pivot + 1, right);
    }
}

void maxtillI(int arr[], int n)
{
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout << "\nMax element at " << i + 1 << " level is " << mx << endl;
    }
}

int main()
{
    int n;
    cout << "Enter Array size: ";
    cin >> n;

    int arr[10];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter key; ";
    cin >> key;
    if (Binary(arr, n, key))
        cout << "Found\n";
    else
        cout << "Not Found\n";

    maxtillI(arr, n);

    cout << "\nBefore Sort:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    QuickSort(arr, 0, n);
    cout << "\nAfter Sort:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}