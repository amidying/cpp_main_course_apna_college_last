#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    int i, j;
    // pattern 1
    /*
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    */
    // patern 2
    /*
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    */
    // pattern 3 rombus pattern
    /*
    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    */
    // pattern 4
    /*
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    */
    // pattern 5 pallindromic
    /*
    for (i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        int k = i;
        for (; j <= n; j++)
        {
            cout << k--;
        }
        k = 2;
        for (; j <= n + i - 1; j++)
        {
            cout << k++;
        }
        cout << endl;
    }

    */
    // pattern 6 star
    /*
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    */
    // pattern 7 zig zag patern
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0))
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}