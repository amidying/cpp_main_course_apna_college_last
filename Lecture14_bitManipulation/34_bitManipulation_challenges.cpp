
// if a number is power of 2
#include <iostream>
using namespace std;
bool isPower2(int n)
{
    return (n && !(n & n - 1));
}
int numOfOnes(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
void subSets(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    // cout << isPower2(5) << endl;
    // cout << isPower2(4) << endl;
    // cout << isPower2(12) << endl;
    // cout << isPower2(11) << endl;
    // cout << isPower2(16) << endl;

    // cout << numOfOnes(5) << endl;
    // cout << numOfOnes(5) << endl;
    // cout << numOfOnes(12) << endl;

    // char arr1[4] = {'a', 'b', 'c', 'd'};
    // subSets(arr1, 4);
    int arr2[4] = {1, 2, 3, 4};
    subSets(arr2, 4);
    return 0;
}