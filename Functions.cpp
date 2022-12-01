#include <iostream>
#include <cmath>
using namespace std;

void printprime(int x)
{
    for (int i = 2; i < sqrt(x); i++)
    {
        if (x % i == 0)
            return;
    }
    cout << x << " ";
}

int sumofNAtural(int a)
{
    int sum = 0;
    for (int i = 1; i <= a; i++)
        sum = sum + i;
    return sum;
}

bool check(int x, int y, int z)
{
    int b, c;
    int a = max(x, max(y, z));
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }
    if (a * a == (b * b + c * c))
        return true;
    else
        return false;
}

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    bool flag = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Non-prime" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Prime" << endl;
    }
    // Reverse the digits of NUmber
    // Like 123 in reverse order is 321
    int nw;
    cin >> nw;
    int reverse = 0;
    while (nw > 0)
    {
        int lastdigit = nw % 10;
        reverse = reverse * 10 + lastdigit;
        nw = nw / 10;
    }
    cout << reverse << endl;

    // Armstrong Number
    // if cube sum of each digit in the number return the same number , then number is said to be arnstrong number
    //  Example: 153 = 1^3 + 5^3 + 3^3 = 1+125+27=153
    int num;
    cout << "ENter number: ";
    cin >> num;
    int first = num;
    int arm = 0;
    while (first > 0)
    {
        int last = first % 10;
        arm += last * last * last;
        first = first / 10;
    }
    if (num == arm)
        cout << "It is ARMSTRONG Number\n";
    else
        cout << "It is NOT ARMSTRONG Number\n";

    // FUNCTIONS
    // Print all prime numbers btw two numbers
    int w, u;
    cout << "\nEnter Numbers of prime numbers btw two numbers: ";
    cin >> w >> u;
    for (int i = w; i <= u; i++)
        printprime(i);

    int naturals;
    cout << "\nEnter number to find its sum of natural numbers: ";
    cin >> naturals;
    cout << "Sum of " << naturals << " numbers is " << sumofNAtural(naturals);

    int p, y, th;
    cout << "\nEnter three numbers: ";
    cin >> p >> y >> th;
    if (check(p, y, th))
        cout << "Its pythagorean Triplet\n";
    else
        cout << "Its not pythagorean Triplet\n";

    return 0;
}
