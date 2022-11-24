#include <iostream>

using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
// int recurs(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return recurs(n) * recurs(n - 1);
//     }
// }
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    // int n;
    // cin >> n;
    // int facto = factorial(n);
    // cout << facto << endl;
    // int rec = recurs(n);
    // cout << rec << endl;
    int a, b, c;
    cin >> a >> b >> c;
    // if(max(a,max(b,c)))
    int maxie = max(a, max(b, c));
    cout << maxie << endl;
    return 0;
}