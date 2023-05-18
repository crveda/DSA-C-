#include <bits/stdc++.h>
using namespace std;

void selectionsort(int arr[], int n)
{
    // Best,Worst,Average time complexity - O(n^2)
    int indx;
    for (int i = 0; i < n - 1; i++)
    {
        indx = i;
        for (int j = i; j < n; j++)
        {
            if (arr[indx] > arr[j])
                indx = j;
        }
        int tmp = arr[indx];
        arr[indx] = arr[i];
        arr[i] = tmp;
    }
}

void bubblesort(int arr[], int n)
{
    // Worst,Average -> O(n^2)
    // Best -> O(n)   //->(REMEMBER THIS)
    for (int i = 0; i < n; i++)
    {
        int swa = 1;
        for (int j = 0; j < (n - i); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                swa = 0;
            }
        }
        if (swa == 0)
            break;
    }
}

void insertionsort(int arr[], int n)
{
    // Worst,Average -> O(n^2)
    // Best -> O(n)   //->(REMEMBER THIS)
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int tmp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = tmp;
            j--;
        }
    }
}

void intersectarrays(int arr1[], int arr2[], int n, int m)
{
    // Intersection of two SORTED Array
    vector<int> un;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr1[i] > arr2[j])
            j++;
        else
        {
            un.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    cout << "\nIntersection of two sorted array is:\n";
    for (int i = 0; i < un.size(); i++)
    {
        cout << un[i] << " ";
    }
}

void rotateright(vector<int> nums, int k)
{
    vector<int> tmp;
    int n = nums.size();
    cout << "\nFirst:\n";
    for (int i = (n - k); i < n; i++)
    {
        tmp.push_back(nums[i]);
        cout << nums[i] << " ";
    }
    cout << "\nSec:\n";
    for (int i = (n - 1); i >= k; i--)
    {
        nums[i] = nums[i - k];
        cout << nums[i - k] << " ";
    }
    cout << "\nThird:\n";
    for (int i = 0; i < k; i++)
    {
        nums[i] = tmp[i];
        cout << tmp[i] << " ";
    }
    cout << "\nFinal\n";
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    insertionsort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    vector<int> tmp;
    for (int i = 1; i < 8; i++)
        tmp.push_back(i);
    rotateright(tmp, 3);

    // int arr1[] = {1, 2, 3, 4, 5};
    // int arr2[] = {2, 3, 5};
    // intersectarrays(arr1, arr2, 5, 3);
    return 0;
}