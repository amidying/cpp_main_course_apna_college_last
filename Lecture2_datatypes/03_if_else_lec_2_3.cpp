#include <iostream>
using namespace std;

void even_odd(int a)
{
    if (a % 2 == 0)
    {
        cout << "a is even";
    }
    else
    {
        cout << "a is odd";
    }
}
int main()
{

    // maximum of three different number
    int a, b, c;
    cout << "Enter a,b,c: \n";
    // cin >> a;
    // cin >> b;
    // cin >> c;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "a: " << a << " is the maximum";
        }
    }
    else if (b > a)
    {
        if (b > c)
        {
            cout << "b: " << b << " is the maximum";
        }
    }
    else
    {
        cout << "c: " << c << " is tha maximu of them.";
    }
    // odd/even function
    // cout << even_odd(a) << end;

    /*
    int amount;
    cout << "Entert your savings: \n";
    cin >> amount;

    if (amount > 5000)
    {
        if (amount > 10000)
        {
            cout << "Go on a expensive restaurant.\n";
        }
        else
        {
            cout << "Go on a average restaurant.\n";
        }
    }
    else if (amount > 2000 && amount < 5000)
    {
        cout << "Go with Rashmi";
    }
    else
    {
        cout << "Stay Home. It's corona time!!";
    }
    */
    return 0;
}