#include <iostream>
// solve all the patterns
using namespace std;

int main()
{
    //
    /*
    int n;
    cout << "Enter n: \n";
    cin >> n;
    int i, j;
    */
    // rectangle
    /*
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // traiangle
    for (int i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // holo rectangle
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if (i == 1 || i == 5 || j == 1 || j == 4)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    */
    // inverted pyramid
    /*
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    */
    // special ones
    /*
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;

    }
    */
    /*
     int n = 5;
     for (int i = 1; i <= n; i++)
     {
         for (int j = 1; j <= i; j++)
         {
             cout << i;
         }
         cout << endl;
     }
     for (int i = 1; i <= n; i++)
     {
         for (int j = 1; j <= i; j++)
         {
             cout << "  " << j;
         }
         cout << endl;
     }
     */
    // int count = 1;
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "  " << count;
    //         count++;
    //     }
    //     cout << endl;
    // }
    // cutterfly pattern

    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int spaces = 8 - 2 * i;
        for (j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (i = 4; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int spaces = 8 - 2 * i;
        for (j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}