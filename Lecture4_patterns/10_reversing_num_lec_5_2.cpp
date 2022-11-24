#include <iostream>

using namespace std;

int sum(int n){
    int total = 0;
    while (n != 0)
    {
        int temp;
        temp = n % 10;
        total = total + (temp * temp * temp);
        n /= 10;
    }
    return total;
}
int main()
{
    // reversed
    /*
    int n, reversed = 0;
    cin >> n;
    while (n != 0)
    {
        int temp;
        temp = n % 10;
        reversed = 10 * reversed + temp; // 20+
        n /= 10;
    }
    cout << reversed << endl;
    */
    // prime number
    /*
    int n;
    cin >> n;
    bool flag = false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Non-prime" << endl;
            flag = true;
            break;
        }
    }
    if (flag == false)
        cout << "Prime Number" << endl;
    */
    // armstrong number
    int n;
    cin >> n;
    int total = sum(n);
    if (total == n)
        cout << "Armstrong" << endl;
    else
        cout << "Not Armstrong" << endl;
    return 0;
}