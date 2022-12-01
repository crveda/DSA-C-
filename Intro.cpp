#include <iostream> //Preprocessor Directive
// iostream -> is Header file for taking input and printing output
using namespace std;

int main()
{
    int i;
    i = 12;
    cout << "size 0f int " << sizeof(i) << endl;

    float f = 12.2;
    cout << sizeof(f) << endl;

    int number;
    cout << "Enter amount: ";
    cin >> number;
    cout << number + 10 << " is the total\n";

    int a, b, c;
    cout << "Enter: ";
    cin >> a >> b >> c;
    int x = {(a > b && a > c) ? a : ((b > a && b > c) ? b : c)};
    cout << x << " is largest number"
         << "\n";

    int n;
    cout << "Enter: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cout << i + 1 << endl;
    while (n > 0)
    {
        cout << n << " ";
        n--;
    }
    cout << "\nWhile: ";
    for (int i = 0; i < 10; i++)
    {

        if (i % 2 == 0)
            continue;
        else if (i % 3 == 0)
            break;
        else
            cout << i << " ";
    }
    cout << "\nSwitch:" << b << endl;
    switch (b)
    {
    case 1:
        cout << "Divisible by 2";
        break;
    case 2:
        cout << "Divisible by 3\n";
        break;
    default:
        cout << "Number";
    }

    return 0;
}