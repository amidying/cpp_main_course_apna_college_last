#include <iostream>

using namespace std;

int main()
{
    // cout << "Hello World\n";
    int n, sum = 0;
    cout << "Enter n: \n";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
    cout << n * (n + 1) / 2 << endl;
    int i = 0, sum2 = 0;
    while (i <= n)
    {
        sum2 += i;
        i++;
    }
    cout << sum2 << endl;
    int sum3 = 0;
    int ii = 0;
    do
    {
        sum3 += ii;
        ii++;
    } while (ii <= n);
    cout << sum3 << endl;
    return 0;
}