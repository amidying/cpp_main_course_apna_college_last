#include <iostream>
// continue skips the loop and starts from the beging
// break terminates the loop
using namespace std;

int main()
{
    /*
    for (int d = 1; d <= 31; d++)
    {
        if (d % 2 == 0)
        {
            continue;
        }
        cout << "You may go out  today! " << d << "th" << endl;
    }
    int eidday;
    cout << "Enter Eid day!" << endl;
    cin >> eidday;
    for (int i = 1; i <= 30; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << "You can go to tuition. " << i << "th" << endl;
        if (i == eidday)
        {
            cout << "To day is Eid day. Everything if off!";
            break;
        }
    }
    // is the number is divisible by 4 then skip the number
    for (int i = 0; i <= 500; i++)
    {
        if (i % 4 == 0)
        {
            continue;
        }
        cout << i << endl;
    }
    */
    /*
     // finding prime or non-prime numbers
     int i, n;
     cout << "Enter n: " << endl;
     cin >> n;
     for (i = 2; i < n; i++)
     {
         if (n % i == 0)
         {
             cout << "Non prime" << endl;
             break;
         }
     }
     if (i == n)
     {
         cout << "Prime" << endl;
     }
     */
    // printing prime number between a and b
    int a, b, i, num;
    cout << "Enter a and b: \n";
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        int j;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            cout << i << endl;
        }
    }

    return 0;
}