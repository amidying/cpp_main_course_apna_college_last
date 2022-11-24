#include <iostream>
// see the pdf for more info

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 10)
    {
        cout << "More than or equal to 10\n";
    }
    else
    {
        cout << "Less than 10\n";
    }
    // write a programm is a number is divisible by 2 and 3 or one of them
    if (n % 2 == 0 && n % 3 == 0)
    {
        cout << "Divisible by both\n";
    }
    else if (n % 2 == 0 && n % 3 != 0)
    {
        cout << "divisible by 2 not 3\n";
    }
    else if (n % 2 != 0 && n % 3 == 0)
    {
        cout << "divisible by 3 not 2\n";
    }
    else
    {
        cout << "divisible by none\n";
    }
    // tarnary operator
    int a = 10, b = 21;
    int c = a > b ? a % b : b % a;
    cout << c << endl;
    return 0;
}