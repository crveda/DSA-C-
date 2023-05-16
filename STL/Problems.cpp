#include <bits/stdc++.h>
using namespace std;
void printDivisorsOptimal(int n)
{

    cout << "The Divisors of " << n << " are:" << endl;
    for (int i = 1; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            cout << i << " ";
            if (i != n / i)
                cout << n / i << " ";
        }

    cout << "\n";
}

bool isPalindrome(int x)
{
    if (x < 0)
        return 0;
    int n = x;
    int g = 0, r = 0;
    while (x > 0)
    {
        g = x % 10;
        r = r * 10 + g;
        x = x / 10;
    }
    cout << endl
         << r << " " << n << endl;
    if (n == r)
        return 1;
    else
        return 0;
}

int reverse(int n)
{
    long long r = 0, g = 0;
    int x = n;
    if (x < 0)
    {
        x = x + x * 2;
    }
    cout << "\nHERE" << x << endl;
    while (x > 0)
    {
        g = x % 10;
        r = r * 10 + g;
        x = x / 10;
    }
    if (n > 0)
        return r;
    r = r - r * 2;
    return r;
}

int main()
{
    // cout << isPalindrome(101);
    // cout << reverse(-312);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (l == r)
            break;
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
    // for (int i = 0; i < n; i++)
    //     cout << arr[i];
    string S = "aba";
    string ee;
    int j = 0;
    for (int i = (S.size() - 1); i >= 0; i--)
    {
        ee[j] = S[i];
        j++;
    }
    cout << r;

    return 0;
}