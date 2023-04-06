#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter row and col: ";
    cin >> n >> m;
    int arr[n][m];
    cout << "Enter Elements of Array:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    // Spiral Order Traversal of 2D Array
    int rowstart = 0, rowend = n - 1, colstart = 0, colend = m - 1;
    cout << "Spiral traversal : \n";
    while (rowstart <= rowend && colstart <= colend)
    {
        for (int col = colstart; col <= colend; col++)
            cout << arr[rowstart][col] << " ";
        rowstart++;
        for (int row = rowstart; row <= rowend; row++)
            cout << arr[row][colend] << " ";
        colend--;
        for (int col = colend; col >= colstart; col--)
            cout << arr[rowend][col] << " ";
        rowend--;
        for (int row = rowend; row >= rowstart; row--)
            cout << arr[row][colend] << " ";
        colstart++;
    }
    cout << endl;
    // int b[n][m];
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         b[j][i] = arr[i][j];
    //     }
    // }
    // cout << "Transpose:\n";
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << b[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // Transpose // Square matrix is required
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    cout << "Transpose:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int n2, m2;
    cout << "Enter row and col: ";
    cin >> n2 >> m2;
    int arr2[n2][m2];
    cout << "Enter Elements of Array:\n";
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
            cin >> arr2[i][j];
    }
    int ans[m][n2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            for (int k = 0; k < m; k++)
                ans[i][j] += arr[i][k] * arr2[k][j];
        }
    }

    return 0;
}