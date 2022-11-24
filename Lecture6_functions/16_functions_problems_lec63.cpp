#include <iostream>

using namespace std;
int sum(int n)
{
    // formula approach
    return (n * (n + 1)) / 2;
}
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
        return b;
}
bool check(int x, int y, int z)
{
    int maximum = max(x, max(y, z));
    bool flag = false;
    int b, c;
    if (maximum == x)
    {
        b = y, c = z;
    }
    else if (maximum == y)
    {
        b = x, c = z;
    }
    else
    {
        b = x, c = y;
    }
    if (maximum * maximum == b * b + c * c)
        return true;
    else
        return false;
}
int BinaryToDecimal(int n);
int main()
{
    // sum of first natural numbers using formula
    /*
    int n;
    cin >> n;
    int total = sum(n);
    cout << total << endl;
    */
    // pythogorean triplet cheker
    /*
    int x, y, z;
    cin >> x >> y >> z;
    if (check(x, y, z))
    {
        cout << "Pythagorean Triplet\n";
    }
    else
        cout << "Not pythagorean triplet\n";
        */
    // binary to decimal
    int n;
    cin >> n;
    // BinaryToDecimal is below the main function
    cout << BinaryToDecimal(n) << endl;
    return 0;
}
int BinaryToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 2;
    }
}