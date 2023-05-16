#include <bits/stdc++.h>
using namespace std;

// Hashing -> Precompute and fetch

void countfreq()
{
    // Count the frequency of each element in the array
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;
    int q;
    cin >> q;
    while (q > 0)
    {
        int x;
        cin >> x;
        cout << hash[x] << " ";
        q--;
    }
}

void countfreqofChar()
{
    // Count the frequency of each element in a string
    // for string in lowercase
    string str;
    cin >> str;
    int hash[26] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        int indx = str[i] - 'a';
        hash[indx]++;
    }
    char q;
    cin >> q;
    cout << hash[q - 'a'];

    // for string consist of both lower and uppercase
    // string str;
    // cin >> str;
    // int hash[256] = {0};
    // for (int i = 0; i < str.length(); i++)
    // {
    //     int indx = str[i];
    //     hash[indx]++;
    // }
    // char q;
    // cin >> q;
    // cout << hash[q];
}

int main()
{
    // countfreq();
    countfreqofChar();
    return 0;
}