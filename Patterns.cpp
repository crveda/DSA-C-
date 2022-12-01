#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter row & Coloum "; // Rectangle Pattern
    cin >> n >> m;                 //****
    for (int i = 1; i <= n; i++)   //****
    {                              //****     for 3 -row 4-col
        for (int j = 1; j <= m; j++)
            cout << "*";
        cout << endl;
    }

    // Hollow Rectangle Pattern
    //****
    //*  *
    //*  *
    //****
    cout << "\nHollow Rectangle Pattern is:\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 || j == 1 || i == n || j == m)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    // Inverted Half Pyramid n=5;
    //*****
    //****
    //***
    //**
    //*
    int p;
    cout << "Enter p: ";
    cin >> p;
    for (int i = 1; i <= p; i++)
    {
        for (int j = (i); j <= p; j++)
            cout << "*";
        cout << endl;
    }
    // Half Pyramid after 180deg Rotations
    //     *
    //    **       //For n=4
    //   ***
    //  ****
    cout << "Half Pyramid after 180deg Rotations:\n\n";
    for (int i = 1; i <= p; i++)
    {
        for (int j = 1; j <= p; j++)
        {
            if (j <= p - i)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }

    // Half Pyramid with Numbers
    // 1        //1
    // 22       //2 3
    // 333      //4 5 6
    int count = 1;
    for (int i = 1; i <= p; i++)
    {
        for (int j = (p - i + 1); j <= p; j++) // or for(int j=1;j<=i;j++)
            cout << count++ << " ";
        cout << endl;
    }
    // Butterfly Pattern
    cout << "\n Butterfly Pattern\n";
    for (int i = 1; i <= p; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "*";
        for (int j = 1; j <= (2 * n - 2 * i); j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = p; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
            cout << "*";
        for (int j = 1; j <= (2 * n - 2 * i); j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    cout << "Inverted Pattern\n";
    for (int i = 1; i <= p; i++)
    {
        for (int j = 1; j <= (p - i + 1); j++)
            cout << j << " ";
        cout << endl;
    }
    cout << "1 and 0 alternative Pattern\n";
    // Observation:
    // Observe the position of 0 and 1 in the matrix like structure given , the row and column indices and try the pattern detection
    // In all pattern questions , observe the row and column indices
    for (int i = 1; i <= p; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
                cout << 1 << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }

    cout << "Rhombus Pattern\n";
    for (int i = 1; i <= p; i++)
    {
        for (int j = 1; j <= p - i; j++)
            cout << " ";
        for (int j = 1; j <= p; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
    for (int i = 1; i <= p; i++)
    {
        for (int j = 1; j <= p - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << j << " ";
        cout << endl;
    }

    cout << endl;
    for (int i = 1; i <= p; i++)
    {
        for (int j = 1; j <= p - i; j++)
            cout << " ";
        for (int j = i; j >= 1; j--)
            cout << j;
        for (int j = 1; j <= i; j++)
        {
            if (j == 1)
                continue;
            cout << j;
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= p; i++)
    {
        for (int j = 1; j <= p - i; j++)
            cout << " ";
        for (int j = i; j >= 1; j--)
            cout << "*";
        for (int j = 1; j <= i; j++)
        {
            if (j == 1)
                continue;
            cout << "*";
        }
        cout << endl;
    }
    for (int i = p; i >= 1; i--)
    {
        for (int j = 1; j <= p - i; j++)
            cout << " ";
        for (int j = i; j >= 1; j--)
            cout << "*";
        for (int j = 1; j <= i; j++)
        {
            if (j == 1)
                continue;
            cout << "*";
        }
        cout << endl;
    }

    // Zig-Zag Pattern
    cout << "\nZig-Zag Pattern\n"
         << endl;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= p; j++)
        {
            if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}