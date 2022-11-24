// #include <iostream>
// using namespace std;
// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     int prevSum = sum(n-1);
//     return (n+prevSum);
// }
// int power(int n,int p){
//     if(p==0){
//         return 1;
//     }
//     int prevPower = power(n,p-1);
//     return n*prevPower;
// }
// int factorial(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     int prevFactorial = factorial(n-1);
//     return n*prevFactorial;
// }
// int fibonacci(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return fibonacci(n-1)+fibonacci(n-2); 
// }
// int main(){
//     std::cout<<sum(100)<<std::endl;
//     return 0;
// }

// #include"bits/stdc++.h"

// bool Sorted(int arr[],int n){
//     if(n==1){
//         return true;
//     }
//     int restArray = Sorted(arr,n-1);
//     return (arr[0]<arr[1] && restArray);
// }


bool Sorted(int arr[],int n){
    
    if(n==0){
        return true;
    }
    int restArray = Sorted(arr,n-1);
    return (arr[0]<arr[1] && restArray);
}

void dec(int n){
    if(n==0){
        std::cout<<"1"<<std::endl;
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}
void inc(int n){
    if(n==1){
        std::cout<<"1"<<std::endl;
        return;
    }
    inc(n-1);
    std::cout<<n<<std::endl;
}