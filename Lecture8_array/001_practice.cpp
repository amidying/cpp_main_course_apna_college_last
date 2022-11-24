



// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 1; i < n; i++)
//     {
//         int current = arr[i];
//         int j = i - 1;
//         while (arr[j] > current && j >= 0)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = current;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     // insertion sort
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 1; i < n; i++)
//     {
//         int current = arr[i];
//         int j = i - 1;
//         while (arr[j] > current && j >= 0)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = current;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     // insertin sort
//     for (int i = 1; i < n; i++)
//     {
//         int current = arr[i];
//         int j = i - 1;
//         while (arr[j] > current && j >= 0)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = current;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     // bubble sort
//     int counter = 0;
//     while (counter < n - 1)
//     {
//         for (int i = 0; i < n - counter; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 int temp = arr[i + 1];
//                 arr[i + 1] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//         counter++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     // selection sort
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
// // subsequence: A subsequence is a sequence that can be derived from another sequence by removing zero or more elements, without changing the order of the remaining elements. n has 2^n subsequence

// // subarray: contiguous part of any array
// // a array with n eleiment has: nC2+n sub array
// #include <iostream>
// using namespace std;

// int main()
// {
//     // selection sort
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 int temp = arr[j];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
// question: longest arithmatic subarray.
// questins: record breaker
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n + 1];
//     a[n] = -1;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     if (n == 1)
//     {
//         cout << "1" << endl;
//         return 0;
//     }
//     int ans = 0, mx = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > mx && a[i] > a[i + 1])
//         {
//             ans++;
//         }
//         mx = max(mx, a[i]);
//     }
//     cout << ans << endl;

//     return 0;
// }
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
/*
// question: sum of subarrays:
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            cout << sum << endl;
        }
    }
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << a[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
*/
/*
// max till i
#include <iostream>
#include <climits>
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
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        mx = max(a[i], mx);
        cout << mx << " ";
    }
    return 0;
}
*/
/*
// record breaking day
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
*/
/*
// selection sort
#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // cout << sizeof(a) / sizeof(a[0]) << endl;
    // selectionSort(a);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return i;
        }
    }
    return -1;
}
// must be a sorted array
int binarySearch(int arr[], int n, int k)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // cout << linearSearch(arr, n, k) << endl;
    cout << binarySearch(arr, n, k) << endl;
    return 0;
}
*/

/*
// #include<iostream>
#include "bits/stdc++.h"
using namespace std;

int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
// 1. max till i
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
        }
    }
    cout << mx << endl;
    return 0;
}
*/
/*
// record breaker
int main()
{
    int n;
    cout << "enter size n: \n";
    cin >> n;
    int a[n + 1];
    a[n] = -1;
    cout << "enter array: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }
    int ans = 0, mx = 1;
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
*/
// linear earch
// #include<iostream>

// bool linearSearch(int arr[],int n,int key){
//     // int n = sizeof(arr)/sizeof(int);
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             return true;
//         }
//     }
//     return false;
// }

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n= 5;
//     int key=4;
//     std::cout<<linearSearch(arr,n,key)<<std::endl;
//     // n = 10;
//     key=10;
//     std::cout<<linearSearch(arr,n,key)<<std::endl;
//     return 0;
// }

// // * linear search
// #include<iostream>
// bool linearSearch(int arr[],int n,int key){
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             return true;
//         }
//     }
//     return false;
// }

// // * sorting arrays
// void swap(int arr[],int i,int j){
//     int temp = arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
// }
// void sorting(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 swap(arr,i,j);
//             }
//         }
//     }
// }


// int main(){
//     int arr[5]={3,2 ,6,1,7};
//     // sorting(arr,5);
//     bubbleSort(arr,5);
//     for(int i=0;i<5;i++){
//         std::cout<<arr[i]<<" ";
//     }
//     return 0;
// // }

// #include<iostream>
// void swap(int arr[],int i,int j){
//     int temp = arr[i];
//     ar[i]=arr[j];
//     arr[j]=temp;
// }
// void bubbleSort(int arr[],int n){
//     int counter = 1;
//     while(counter<=n){
//         for(int i=0;i<n-counter;i++){
//             if(arr[i]>arr[i+1]){
//                 swap(arr,i,i+1);
//             }
//         }
//     }
// }

// int main(){
//     int arr[5]={5,4,3,2,1};
//     bubbleSort(arr,5);
//     for(int i=0;i<5;i++){
//         std::cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// * merge sort or two sorted arra merging
// #include"bits/stdc++.h"

// using namespace std;

// void merge(int arr[],int l,int mid,int r){
//     int n1,n2;
//     n1 = (mid-l+1);
//     n2 = (r-mid);
//     int arr1[n1],arr2[n2];
//     for(int i=0;i<n1;i++){
//         arr1[i]=arr[l+i];
//     }
//     for(int i=0;i<n2;i++){
//         arr2[i]=arr[mid+i+1];
//     }
//     int i=0,j=0,k=l;
//     while(i<n1 && j<n2){
//         if(arr1[i]<arr2[j]){
//             arr[k]=arr1[i];
//             i++;
//             k++;
//         }
//         else{
//             arr[k]=arr2[j];
//             j++;
//             k++;
//         }
//     }
//     while(i<n1){
//         arr[k]=arr1[i];
//         k++;i++;
//     }
//     while(j<n2){
//         arr[k]=arr2[j];
//         j++;
//         k++;
//     }
// }

// void mergeSort(int arr[],int l,int r){
//     if(l<r){
//         int mid = (l+r)/2;
//         mergeSort(arr,l,mid);
//         mergeSort(arr,mid+1,r);
//         merge(arr,l,mid,r);
//     }
// }



// int main(){
// 	int n;cin>>n; int arr[n];for(int i=0;i<n;i++){cin>>arr[i];}
// 	mergeSort(arr,0,n-1);
// 	for(int i=0;i<n;i++){cout<<arr[i]<<" ";}
// 	return 0;
// }

// #include"bits/stdc++.h"
// using namespace std;

// int main(){
//     int n;cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     const int N = 1e6+2;
//     int idx[N];
//     for(int i=0;i<N;i++){
//         idx[i]=-1;
//     }
//     int minindex = INT_MAX;
//     for(int i=0;i<n;i++){
//         if(idx[arr[i]]!=-1){
//             minindex = min(minindex,idx[arr[i]]);
//         }
//         else{
//             idx[arr[i]]=i;
//         }
//     }
//     if(minindex==INT_MAX){
//         cout<<"-1"<<endl;
//     }
//     else{
//         cout<<minindex<<endl;
//     }
//     return 0;
// }
/*
#include"bits/stdc++.h"
using namespace std;

int main(){
    int n,s;
    cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    int i=0,j=0;
    int st=-1,ed=-1,sum=0;

    while(j<n && sum+a[j]<=s){

        sum+=a[j];
        j++;
    }
    if(s==sum){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }
    while(j<n){
        sum+=a[j];
        while(sum>s){
            sum-= a[i];
            i++;
        }
        if(sum==s){
            st=i+1;
            ed = j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<ed<<endl;

    return 0;
}
*/
//* find min positive number missing

#include"bits/stdc++.h"
using namespace std;

int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    const int N = 1e6+2;
    bool check[N];
    for(int i=0;i<N;i++){
        check[i]=false;
    }
    for(int i=0;i<n;i++){
        if(a[i]>0){
            check[a[i]]=true;
        }
    }
    int ans = -1;
    for(int i=1;i<N;i++){
        if(check[i]==false){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}