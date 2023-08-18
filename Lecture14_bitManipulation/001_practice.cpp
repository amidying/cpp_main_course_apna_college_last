
// #include <iostream>
// using namespace std;
// bool getBit(int n, int pos)
// {
//     return ((n & (1 << pos)) != 0);
// }
// void unique2(int arr[], int n)
// {
//     int xorsum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         xorsum = xorsum ^ arr[i];
//     }
//     int tempxor = xorsum;
//     int pos = 0;
//     int setbit = 0;
//     while (setbit != 1)
//     {
//         setbit = xorsum & 1;
//         pos++;
//         xorsum = xorsum >> 1;
//     }
//     int newxor = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (getBit(arr[i], pos - 1))
//         {
//             newxor = newxor ^ arr[i];
//         }
//     }
//     cout << newxor << " " << (newxor ^ tempxor) << endl;
// }
// int setBit(int n, int pos)
// {
//     return (n | (1 << pos));
// }
// int unique3(int arr[], int n)
// {
//     int result = 0;
//     for (int i = 0; i < 64; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (getBit(arr[j], i))
//             {
//                 sum++;
//             }
//         }
//         if (sum % 3 != 0)
//         {
//             result = setBit(result, i);
//         }
//     }
//     return result;
// }
// int unique3(int arr[], int n)
// {
//     int result = 0;
//     for (int i = 0; i < 64; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (getBit(arr[j], i))
//             {
//                 sum++;
//             }
//         }
//         if (sum % 3 != 0)
//         {
//             result = setBit(result, i);
//         }
//     }
//     return result;
// }
// int main()
// {
//     int arr[10] = {1, 2, 3, 53243, 5345, 1, 2, 3, 4, 4};
//     unique2(arr, 10);
//     int arr2[10] = {1, 2, 3, 4, 1, 2, 3, 1, 2, 3};
//     cout << unique3(arr2, 10) << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int unique(int arr[], int n)
// {
//     int xorsum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         xorsum = xorsum ^ arr[i];
//     }
//     return xorsum;
// }
// int getBit(int n, int i)
// {
//     return ((n & (1 << i)) != 0);
// }
// void unique2(int arr[], int n)
// {
//     int xorsum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         xorsum = xorsum ^ arr[i];
//     }
//     int oldxor = xorsum;
//     int setbit = 0;
//     int pos = 0;
//     while (setbit != 1)
//     {
//         setbit = xorsum & 1;
//         pos++;
//         xorsum = xorsum >> 1;
//     }
//     int newxor = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (getBit(arr[i], pos - 1))
//         {
//             newxor = newxor ^ arr[i];
//         }
//     }
//     cout << newxor << " " << (oldxor ^ newxor) << endl;
// }
// int main()
// {
//     int arr[5] = {1, 2, 3, 2, 1};
//     cout << unique(arr, 5) << endl;
//     // int arr2[6] = {1, 2, 10, 15, 1, 2};
//     // cout << unique2(arr2, 6) << endl;
//     int arr3[10] = {1, 2, 3, 4, 54, 67, 1, 2, 3, 4};
//     unique2(arr3, 10);
//     return 0;
// }
// #include "bits/stdc++.h"
// using namespace std;

// // power of 2
// bool powOf2(int n)
// {
//     return (n && !(n & (n - 1)));
// }
// int numOf1(int n)
// {
//     int count = 0;
//     while (n)
//     {
//         n = n & (n - 1);
//         count++;
//     }
//     return count;
// }

// // num of subsets
// void subSets(int arr[], int n)
// {
//     for (int i = 0; i < (1 << n); i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i & (1 << j))
//             {
//                 cout << arr[j] << " ";
//             }
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     cout << powOf2(16) << endl;
//     cout << numOf1(51) << endl;
//     cout << numOf1(50) << endl;
//     int arr[5] = {1, 2, 3};
//     subSets(arr, 3);
//     return 0;
// }
// // get bit
// #include "bits/stdc++.h"
// using namespace std;

// int getBit(int n, int pos)
// {
//     return ((n & (1 << pos)) != 0);
// }
// int setBit(int n, int pos)
// {
//     return (n | (1 << pos));
// }
// int clearBit(int n, int pos)
// {
//     int mask = ~(1 << pos);
//     return (n & mask);
// }
// // update bit is nothing but clear and set bit

// int updateBit(int n, int pos, int k)
// {
//     int mask = ~(1 << pos);
//     n = n & mask;
//     return (n | (k << pos));
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int pos;
//     cin >> pos;
//     cout << getBit(n, pos) << endl;
//     cout << setBit(n, pos) << endl;
//     cout << clearBit(5, 2) << endl;
//     cout << updateBit(5, 3, 1) << endl;
//     return 0;
// }
// find one in all thrice
// #include <iostream>
// using namespace std;
// bool getBit(int n, int pos)
// {
//     return ((n & (1 << pos)) != 0);
// }
// int setBit(int n, int pos)
// {
//     return (n | (1 << pos));
// }
// int unique(int arr[], int n)
// {
//     int result = 0;
//     for (int i = 0; i < 64; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (getBit(arr[j], i))
//             {
//                 sum++;
//             }
//         }
//         if (sum % 3 != 0)
//         {
//             result = setBit(result, i);
//         }
//     }
//     cout << result << endl;
// }

// int main()
// {
//     int arr[8] = {1, 2, 3, 1, 2, 3, 4, 5};
//     unique(arr, 8);
//     return 0;
// }

// // unique2
// #include <iostream>
// using namespace std;

// int setBit(int n, int pos)
// {
//     return ((n & (1 << pos)) != 0);
// }
// void unique(int arr[], int n)
// {
//     int xorsum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         xorsum = xorsum ^ arr[i];
//     }
//     int tempxor = xorsum;
//     int setbit = 0;
//     int pos = 0;
//     while (setbit != 1)
//     {
//         setbit = xorsum & 1;
//         xorsum = xorsum >> 1;
//         pos++;
//     }
//     int newxor = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (setBit(arr[i], pos - 1))
//         {
//             newxor = newxor ^ arr[i];
//         }
//     }
//     cout << newxor << endl;
//     cout << (newxor ^ tempxor) << endl;
// }
// int main()
// {
//     int arr[8] = {1, 2, 3, 1, 2, 3, 4, 5};
//     unique(arr, 8);
//     return 0;
// }

// // finding two unique elements
// #include <iostream>
// using namespace std;
// int setBit(int n, int pos)
// {
//     return (n | (1 << pos));
// }
// void unique2(int arr[], int n)
// {
//     int xorsum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         xorsum = xorsum ^ arr[i];
//     }
//     int tempxor = xorsum;
//     int setbit = 0;
//     int pos = 0;
//     while ((setbit != 1))
//     {
//         setbit = xorsum & 1;
//         pos++;
//         xorsum = xorsum >> 1;
//     }
//     int newxor = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (setBit(arr[i], pos - 1))
//         {
//             newxor = newxor ^ arr[i];
//         }
//     }
//     cout << newxor << endl;
//     cout << (newxor ^ tempxor) << endl;
// }

// int main()
// {
//     int arr[8] = {1, 2, 3, 1, 2, 3, 4, 5};
//     unique2(arr, 8);
//     return 0;
// }
// // bit manipulation problems:
// #include <iostream>
// using namespace std;

// int unique(int arr[], int n)
// {
//     int xorsum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         xorsum = xorsum ^ arr[i];
//     }
//     return xorsum;
// }

// int main()
// {
//     int arr[5] = {1, 2, 1, 2, 3};
//     cout << unique(arr, 5) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int getBit(int n, int pos)
// {
//     return ((n & (1 << pos)) != 0);
// }
// int setBit(int n, int pos)
// {
//     return (n | (1 << pos));
// }
// int clearBit(int n, int pos)
// {
//     int mask = ~(1 << pos);
//     return (n & mask);
// }
// int updateBit(int n, int pos, int val)
// {
//     int mask = ~(1 << pos);
//     n = n & mask;
//     return (n & (val << pos));
// }
// int main()
// {
//     cout << getBit(5, 1) << endl;
//     cout << setBit(5, 1) << endl;
//     cout << clearBit(5, 2) << endl;
//     cout << updateBit(5, 2, 1) << endl;
//     return 0;
// }

// // bit manipulation 1
// #include <iostream>
// using namespace std;
// int getBit(int n, int pos)
// {
//     return ((n & (1 << pos)) != 0);
// }
// int setBit(int n, int pos)
// {
//     return (n | (1 << pos));
// }
// int clearBit(int n, int pos)
// {
//     int mask = ~(1 << pos);
//     return (n & mask);
// }
// int updateBit(int n, int pos, int val)
// {
//     int mask = ~(1 << pos);
//     n = n & mask;
//     return (n | (val << pos));
// }
// int updateBit2(int n, int pos, int val)
// {
//     int mask = ~(1 << pos);
//     n = n & mask;
//     return (n | (val << pos));
// }
// int getBit(int n,int pos)
// {
//     return ((n & (1<<pos))!=0);
// }
// int setbit(int n,int pos){
//     return ((n | (1<<pos)));
// }
// int clearBit(int n, int pos){
//     int mask = ~(1<<pos);
//     n = n&mask;
//     return n;
// }
// int clearBit(int n,int pos)
// {
//     int mask = ~(1<<pos);
//     return (n &mask);
// }
// int main()
// {
//     cout << getBit(5, 2) << endl;
//     return 0;
// }

// // bitmaniulations challege 2nd
// #include <iostream>
// using namespace std;

// int unique(int a[], int n)
// {
//     int xorsum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         xorsum = xorsum ^ a[i];
//     }
//     return xorsum;
// }
// int main()
// {
//     int a[5] = {1, 2, 3, 1, 2};
//     cout << unique(a, 5) << endl;
//     return 0;
// }
/*
// chalenges
#include <iostream>
using namespace std;

int isPower2(int n)
{
    return (n && !(n & n - 1));
}
int isPower22(int n)
{
    return (n && !(n & n - 1));
}
int isPower23(int n)
{
    int num = n && !(n & n - 1);
    return num;
}
int isPower24(int n)
{
    int num = n && !(n & n - 1);
    return num;
}
int numof1s(int n)
{
    int count = 0;
    while (n)
    {
        n = n & n - 1;
        count++;
    }
    return count;
}
int numof1s2(int n)
{
    int count = 0;
    while (n)
    {
        n = n & n - 1;
        count++;
    }
    return count;
}
int isPower25(int n)
{
    return (n && !(n & n - 1));
}
void subSets(int a[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}
void subSets2(int a[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << a[j];
            }
        }
        cout << endl;
    }
}
int main()
{
    cout << isPower2(4) << endl;
    cout << isPower2(5) << endl;
    cout << numof1s(5) << endl;
    cout << numof1s(100) << endl;
    cout << numof1s(423423) << endl;
    int arr[5] = {1, 2, 3, 4, 5};
    subSets2(arr, 5);

    return 0;
}
*/
/*
// bit manipulations
#include <iostream>
using namespace std;
int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int setBit(int n, int pos)
{
    return ((n | (1 << pos)));
}
int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}
int updateBit(int n, int pos, int k)
{
    int mask = ~(1 << pos);
    n = n & mask;
    // return (n | k << pos);
    return n;
}

int main()
{
    cout << getBit(10, 1) << endl;
    cout << getBit(10, 0) << endl;
    cout << setBit(10, 0) << endl;
    cout << getBit(10, 0) << endl;
    cout << clearBit(10, 0) << endl;
    cout << getBit(10, 0) << endl;
    cout << updateBit(5, 2, 1) << endl;

    return 0;
}
*/
/*
#include "bits/stdc++.h"

using namespace std;

int getBit(int n, int pos)
{
    int mask = 1 << pos;
    return ((n & mask) != 0);
}
int setBit(int n, int pos)
{
    return ((n | (1 << pos)));
}
int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}
int updateBit(int n, int pos, int k)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return (n | (k << pos));
}
int main()
{
    // int n, pos;
    // cin >> n >> pos;
    // cout << getBit(n, pos) << endl;
    // cout << setBit(n, pos) << endl;
    // cout << clearBit(n, pos) << endl;
    cout << updateBit(8, 3, 3) << endl;
    return 0;
}
*/
/*
// get bit
#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int setBit(int n, int pos)
{
    return ((n | (1 << pos)));
}
int main()
{
    cout << getBit(5, 1) << endl;
    cout << setBit(5, 1) << endl;
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
    int a = 3, b = 4;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a << " " << b << endl;
    cout << 5 / 2 << ":" << (5 >> 1) << endl;
    return 0;
}
*/


// #include"bits/stdc++.h"
// using namespace std;
// int getbit(int n,int pos){
//     return ((n &(1<<pos))!=0);
// }
// int setBit(int n,int pos){
//     return (n |(1<<pos));
// }
// int clearBit(int n,int pos){
//     int mask = ~(1<<pos);
//     return (n&mask);
// }
// int updateBit(int n,int pos,int val){
//     int mask = ~(1<<pos);
//     n = n &mask;
//     return (n | (val<<pos));
// }
// int main()
// {
//     cout<<getbit(5,1)<<endl;
//     cout<<setBit(5,1)<<endl;
//     cout<<clearBit(5,0)<<endl;
//     cout<<updateBit(5,1,1)<<endl;
//     return 0;
// }


// #include"bits/stdc++.h"
// using namespace std;
// bool isPowe2(int n){
//     return (n && !(n & n-1));
// }
// int main()
// {
    
//     return 0;
// }

// #include"bits/stdc++.h"
// using namespace std;
// int getBit(int n,int pos){
//     // return ((n & (1<<pos))!=0);
//     int mask = 1<<pos;
//     return (n & mask)!=0;
// }
// int setBit(int n,int pos){
//     int mask = 1<<pos;
//     return (n | mask);
// }
// int clearBit(int n,int pos){
//     int mask = ~(1<<pos);
//     return (n & mask);
// }
// int updateBit(int n,int pos,int val){
//     // setbit(n,)
//     clearBit(n,pos);
//     // return setbit(n,val);
//     int ans = setBit(n,val);
//     return ans;
// }
// int main(){
//     int n; cin>>n; 
//     int pos;cin>>pos;
//     cout<<getBit(n,pos)<<endl;
//     cout<<setBit(n,pos)<<endl;
//     cout<<clearBit(n,pos)<<endl;
//     cout<<updateBit(n,pos,0)<<endl;
//     return 0;
// }
// video 34

// #include"bits/stdc++.h"
// using namespace std;

// // bool isPower2(int n){
// //     return (n && !(n & (n-1)));
// // }
// bool isPower2(int n){
//     return (n && !(n & (n-1)));
// }

// int numOfOnes(int n){
//     int count =0;
//     while(n){
//         n= n& (n-1);
//         count++;
//     }
//     return count;
// }
// void subSets(int arr[],int n){
//     for(int i=0;i<(1<<n);i++){
//         for(int j=0;j<n;j++){
//             if(i & (1<<j)){
//                 cout<<arr[j]<<" ";
//             }
//         }cout<<endl;
//     }
// }
// int main(){
//     int n;cin>>n;
//     // cout<<isPower2(4)<<endl;
//     // cout<<isPower2(5)<<endl;
//     int arr[]={1,2,3};
//     subSets(arr,3);
//     return 0;
// }

// #include"bits/stdc++.h"

// using namespace std;
// bool isPower2(int n){
//     return (n && !(n & (n-1)));
// }
// int numOfOnes(int n){
//     int count = 0;
//     while(n){
//         n = n&(n-1);
//         count++;
//     }
//     return count;
// }
// // subset is the main problem
// void subsets(char arr[],int n){
//     for(int i=0;i<(1<<n);i++){
//         for(int j=0;j<n;j++){
//             if(i &(1<<j)){// if i is set at jth position or not
//                 cout<<arr[j]<<" ";
//             }
//         }cout<<endl;
//     }
// }
// int setBit(int n,int pos){
//     return ((n & (1<<pos))!=0);
// }
// void unique2(int arr[],int n){
//     int xorsum = 0;
//     for(int i=0;i<n;i++){
//         xorsum = xorsum^arr[i];
//     }
//     int tempxor = xorsum;
//     int sbit = 0;
//     int pos=0;
//     while(sbit !=1){
//         sbit =xorsum &1;
//         pos++;
//         xorsum>>1;
//     }
//     int newxor=0;
//     for(int i=0;i<n;i++){
//         if(setBit(arr[i],pos-1)){
//             newxor = newxor^arr[i];
//         }
//     }
//     cout<<newxor<<endl;
//     cout<<(newxor^tempxor)<<endl;
// }
// int main(){
//     // int n;cin>>n;
//     // cout<<isPower2(n)<<endl;
//     // cout<<numOfOnes(n)<<endl;
//     // char arr[3]={'a','b','c'};
//     // subsets(arr,3);
//     int n;cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     unique2(arr,n);
//     return 0;
// }

// #include"bits/stdc++.h"

// using namespace std;
// int setBit(int n,int pos){
//     return (n |(1<<pos));
// }
// void unique2(int arr[],int n){

//     int xorsum = 0;
//     for(int i=0;i<n;i++){
//         xorsum = xorsum^arr[i];
//     }
//     int tempxor = xorsum;
//     int setbit = 0;
//     int pos = 0;
//     while(setbit!=1){
//         setbit= 1 & xorsum;
//         pos++;
//         xorsum>>1;
//     }
//     cout<<setbit<<endl;
//     int newxor =0;
//     for(int i=0;i<n;i++){
//         if(setBit(arr[i],pos-1)){
//             newxor = newxor^arr[i];
//         }
//     }
//     cout<<newxor<<endl;
//     // cout<<xorsum<<endl;
//     cout<<(newxor^tempxor)<<endl;


// }
// int main(){
//     int n;cin>>n; 
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     // int arr[]={1,2,3,4,5,3,2,1};
//     unique2(arr,sizeof(arr)/sizeof(int));
//     return 0;
// }

#include<iostream>

int getBit(int n,int pos)
{
    return ((n & (1 <<pos)) !=0);
}
int setBit(int n,int pos)
{
    return (n | (1 << pos));
}
int clearBit(int n,int pos)
{
    int maks = ~(1 << pos);
    return (n & maks);
}
int updateBit(int n,int pos,int val)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return (n | (val <<pos));
}

int updateBit2(int n,int pos,int val)
{
    int mask = ~(val << pos);
    n = n & mask;
    return (n | (val <<pos));
}

// ispower2
bool isPower2(int n)
{
    return (n && !(n & n-1));
}

int numOfOnes(int n)
{
    int count =0;
    while(n)
    {
        n = n & (n-1);
        count++;
    }
    return count;
}
void subSets(int arr[],int n)
{
    for(int i=0;i<(1 << n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i &(1 <<j))
            {
                std::cout<<arr[j]<<" ";
            }
        }
        std::cout<<std::endl;
    }
}
int unique(int arr[],int n)
{
    int xorsum =0;
    for(int i=0;i<n;i++)
    {
        xorsum ^= arr[i];
    }
    return xorsum;
}

void unique2(int arr[],int n)
{
    int xorsum =0;
    for(int i=0;i<n;i++)
    {
        xorsum ^= arr[i];
    }
    int tempxor = xorsum;
    int setbit =0;
    int pos =0;
    while(setbit !=1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxor =0;
    for(int i=0;i<n;i++)
    {
        if(setBit(arr[i],pos-1))
        {
            newxor = newxor^arr[i];
        }

    }
    std::cout<<std::endl;
    std::cout<<(tempxor ^ newxor)<<std::endl;
}

int main(int argc,char * argv[])
{
    return 0;
}