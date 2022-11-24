// record braker
/*
problem statement: Isyana is given the number of visitors at her local theme park on N consecutive days. The number of visitors on the i-th day is Vi.
A day is record breaking it it satisfies both of the following conditions:
1. The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
2. Either it is the last day or the number of visitors on the day is strictly largeer than the number of visitors on the following day.
Note that the very first day could be a record breaking day!
Please help Isyana find out the number of record breaking days.
*/
// #include<iostream>
#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    // int a[n];
    int a[n + 1];
    a[n] = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }
    int ans = 0;
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx && a[i] > a[i + 1])
        {
            ans++;
            cout << a[i] << ":";
        }
        mx = max(mx, a[i]);
    }
    cout << ans << endl;
    return 0;
}

/*
#include <iostream>

using namespace std;
int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 2;
    int pd = a[1] - a[0];
    int curr = 2;
    int j = 2;
    while (j < n)
    {
        if (pd == a[j] - a[j - 1])
        {
            curr++;
        }
        else
        {
            pd = a[j] - a[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout << ans << endl;
    return 0;
}
*/
// longest arithmatic subarray
//  #include<iostream>

// using namespace std;

// int main(){
//     int arr[5];
//     return 0;
// }

/*
// sum of every subarray
#include<iostream>


using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int curr=0;
    for(int i=0;i<n;i++){
        curr=0;
        for(int j=i;j<n;j++){
            curr=curr+arr[j];
            cout<<curr<<endl;
        }
    }
    return 0;
}
*/
/*
#include<iostream>
// every sub array is a sub sequence but every sub sequence is not a sub array

using namespace std;


int main(){
    //sub array and sub sequence of array
    // sub array with n elements nC2+n=n(n+1)/2

    // number of sub sequence is 2^n with n elements
    return 0;
}
*/
/*
#include<iostream>


using namespace std;
int max(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}


// Ex: Given an arry print the max till i
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx =-19999999;
    for(int i=0;i<n;i++){
        mx = max(mx,arr[i]);
        cout<<mx<<endl;
    }
    return 0;
}
*/