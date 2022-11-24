#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int reversed_num = 0;
    while (n != 0)
    {
        int tem;
        tem = n % 10;
        reversed_num = 10 * reversed_num + tem;
        n /= 10;
    }
    cout << reversed_num << endl;
    return 0;
}