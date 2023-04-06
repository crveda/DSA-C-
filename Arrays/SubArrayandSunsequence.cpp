#include <iostream>
using namespace std;

void sumofSubarray(int arr[], int n)
{
    int sum;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            cout << sum << endl;
        }
    }
}

void longestCommonSubarray(int arr[], int n)
{
    int ans = 2;
    int pd = arr[1] - arr[0];
    int j = 2;
    int curr = 2;
    while (j < n)
    {
        if (pd == (arr[j] - arr[j - 1]))
            curr++;
        else
        {
            pd = arr[j] - arr[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout << "Longest Common Subbarray Length is : " << ans << endl;
}

void recordbreakday(int arr[], int n)
{
    int curr = 0;
    int maxe = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (arr[i] > arr[i + 1])
                cout << "\nRecord breaking day at " << i + 1 << " node with value " << arr[i] << endl;
        }
        else if (i == n - 1)
        {
            if (arr[i] > maxe)
                cout << "\nRecord breaking day at " << i + 1 << " node with value " << arr[i] << endl;
        }
        else
        {
            if (arr[i] > maxe && arr[i] > arr[i + 1])
                cout << "\nRecord breaking day at " << i + 1 << " node with value " << arr[i] << endl;
        }
        maxe = max(maxe, arr[i]);
    }
}

void firstOccurrenceofduplicate(int arr[], int n)
{
    int b[100000];
    for (int i = 0; i < 100000; i++)
        b[i] = -1;
    int minindex = 99999;
    for (int i = 0; i < n; i++)
    {
        if (b[arr[i]] == -1)
        {
            b[arr[i]] = i;
        }
        else
        {
            minindex = min(minindex, b[arr[i]]);
        }
    }
    if (minindex == 99999)
        cout << "No duplicate elements found" << endl;
    else
        cout << "\nThe first duplicate number is occured at position " << (minindex + 1) << " and duplicate number is " << arr[minindex] << endl;
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

    sumofSubarray(arr, n);
    longestCommonSubarray(arr, n);
    recordbreakday(arr, n);
    firstOccurrenceofduplicate(arr, n);
    return 0;
}

// git remote add ogn https://github.com/crveda/DSA_Cpp.git