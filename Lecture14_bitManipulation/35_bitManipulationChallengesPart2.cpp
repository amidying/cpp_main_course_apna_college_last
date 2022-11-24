
#include <iostream>
using namespace std;
int unique(int a[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ a[i];
    }
    return xorsum;
}
// find two unique element in arn arry
// int setBit(int n, int pos)
// {
//     return ((n & (1 << pos)) != 0);
// }
void unique2(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;
    while (setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxor = 0;
    for (int i = 0; i < n; i++)
    {
        if (setBit(arr[i], pos - 1))
        {
            newxor = newxor ^ arr[i];
        }
    }
    cout << newxor << endl;
    cout << (tempxor ^ newxor) << endl;
}
bool getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int setBit(int n, int pos)
{
    return (n | (1 << pos));
}
int unique3(int arr[], int n)
{
    int result = 0;
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getBit(arr[j], i))
            {
                sum++;
            }
        }
        if (sum % 3 != 0)
        {
            result = setBit(result, i);
        }
    }
    return result;
}
int main()
{
    // int a[7] = {1, 3, 4, 1, 2, 3, 1};
    int a[8] = {2, 4, 6, 7, 4, 5, 6, 2};
    // cout << unique(a, 8) << endl;
    unique2(a, 8);
    return 0;
}

/*
// my way is not working
#include <iostream>
using namespace std;

int main()
{
    int a[7] = {1, 2, 3, 4, 1, 2, 3};
    int ans[7];
    for (int i = 0; i < 7; i++)
    {
        a[i] = 0;
    }
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (a[i] == a[j])
            {
                ans[i]++;
            }
            else
            {
                ans[i] += 5;
            }
        }
    }
    for (int i = 0; i < 7; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
*/