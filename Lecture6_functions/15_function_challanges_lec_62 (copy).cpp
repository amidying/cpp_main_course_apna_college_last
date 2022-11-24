#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void fib(int n)
{
    int t1 = 0, t2 = 1, nextt;
    for (int i = 1; i <= n; i++)
    {
        cout << t1 << endl;
        nextt = t1 + t2;
        t1 = t2;
        t2 = nextt;
    }
}
int facto(int n)
{
    int mult = 1;
    for (int i = 1; i <= n; i++)
    {
        mult *= i;
    }
    // cout << mult << endl;
    return mult;
}
int main()
{
    /*
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }
    */
    // fibenacci sequence
    /*
    int b;
    cin >> b;
    fib(b);
    */
    // factorial
    // int n;
    // cin >> n;
    // facto(n);

    // calculating nCr
    /*
    int n, r;
    cin >> n >> r;
    int nCr;
    nCr = facto(n) / (facto(n - r) * facto(r));
    cout << nCr << endl;
    int nPr = facto(n) / facto(n - r);
    cout << nPr << endl;
    */
    // pascal triangle
    /*
    1
    1   2
    1   3   1
    */
    int n, i, j;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << facto(i) / (facto(i - j) * facto(j)) << " ";
        }
        cout << endl;
    }

    return 0;
}