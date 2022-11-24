#include "bits/stdc++.h"


using namespace std;
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void fib(int n){
    int t1=0,t2=1,next;
    for(int i=1;i<=n;i++){
        cout<<t1<<endl;
        next = t1+t2;
        t1=t2;
        t2=next;
    }
}

int facto(int n){
    int mul=1;
    for(int i=1;i<=n;i++){
        mul *=i;
    }
    // cout<<mul<<endl;
    return mul;
}

int main(){
    int a,b;
    cin>>a>>b;
    // prime number
    // for(int i=a;i<=b;i++){
    //     if(isPrime(i)){
    //         cout<<i<<endl;
    //     }
    // }
    // fibonacci series
    // fib(a);

    // factorial
    // facto(a);

    // calculating nCr
    // int fats = facto(a)/(facto(b)*facto(a-b));
    // cout<<fats<<endl;

    // pascel triangle
    for(int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
            cout<<facto(i)/(facto(i-j)*facto(j));
        }
        cout<<endl;
    }
    return 0;
}