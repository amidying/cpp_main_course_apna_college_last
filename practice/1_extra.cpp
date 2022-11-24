// searching in arrays
// 1. linear search
// #include<iostream>
// using namespace std;
// void linearSearch(){
//     int n,k;
//     cout<<"Enter n:\n";
//     cin>>n;
//     cout<<"Enter target: \n";
//     cin>>k;
//     int arr[n];
//     cout<<"Enter the array: \n";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]==k){cout<<"Target is: found at: "<<i<<endl;}
//         continue;
//     }
//     cout<<"Target is not found: ";
// }
// void binarySerach(){
    
// }
// int main(){
//     linearSearch();
//     return 0;
// }



/*
// maximum and minimum of an array
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maximum = INT_MIN;
    int minimum = INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]>maximum){maximum=arr[i];}
        if(arr[i]<minimum){minimum=arr[i];}
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The maximum is: "<<maximum<<endl;
    cout<<"The minimum is: "<<minimum<<endl;
    return 0;
}
*/


// #include<iostream>
// using namespace std;

// int main(){
//     int n;cin>>n;
//     int x=1;
//     while(x<=n){
//         x *=16;
//     }
//     cout<<x<<endl;
//     x/=16;
//     cout<<x<<endl;
//     int lastDigit =n/x;
//     cout<<lastDigit<<endl;
//     return 0;
// }

// is prime

// #include<iostream>
// using namespace std;
// int isPrime(int a){
//     for(int i=2;i<a;i++){
//         if(a%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// void fib(int n){
//     int t1=0,t2=1,next;
//     for(int i=1;i<=n;i++){
//         cout<<t1<<endl;;
//         next = t1+t2;
//         t1 = t2;
//         t2 = next;
//     }
    
// }

// int factorial(int n){
//     int mul=1;
//     for(int i=1;i<=n;i++){
//         mul *=i;
//     }
//     return mul;
// }


// int main(){
//     // int a,b;
//     // cout<<"enter a,b"<<endl;
//     // cin>>a>>b;
//     // // for(int i=a;i<=b;i++){
//     // //     if(isPrime(i)){
//     // //         cout<<i<<" ";
//     // //     }
//     // // }
//     // fib(5);
//     // int n;
//     // cout<<"enter n"<<endl;
//     // cin>>n;
//     // fib(n);

//     // factorial
//     cout<<factorial(4)<<endl;
//     return 0;
// }

// advance functions

// octal to decimal
// #include<iostream>
#include"bits/stdc++.h"
#include<string.h>
using namespace std;
int octalToDecimal(int n){
    int ans = 0,temp=1;
    while(n!=0){
        int rem = n%10;
        ans += rem*temp;
        temp *=8;
        n/=10;
    }
    return ans;
}

int hexToDeciaml(string n){
    int ans = 0;
    int x=1;
    int s= n.size();
    for(int i=s-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
            ans += x*(n[i]-'0');
        }else if(n[i]>='A' *&& n[i]<='F'){
            ans += x*(n[i]-'A'+10);
        }
        x*=16;
    }
    return ans;
}

int main(){
    string n;
    cout<<"Enter n\n";
    cin>>n;
    string num = hexToDeciaml(n);
    // cout<<octalToDecimal(n)<<endl;
    cout<<num<<endl;
    return 0;
}