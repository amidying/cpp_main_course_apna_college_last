// #include"bits/stdc++.h"
// using namespace std;
// bool check_prime(int n){
//     for(int i=2;i*i<n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// void getPrimes(int n){
//     for(int i=2;i<=n;i++){
//         if(check_prime(i)){
//             cout<<i<<" ";
//         }
//     }
// }
// int main()
// {
//     int n;cin>>n;
//     getPrimes(n);
//     return 0;
// }

// #include"bits/stdc++.h"
// using namespace std;

// bool check_prime(int n){
//     for(int i=2;i*i<n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     for(int i=2;i<5;i++){
//         cout<<check_prime(i)<<endl;
//     }
//     // cout<<4%2<<endl;
//     return 0;
// }
// #include"bits/stdc++.h"
// using namespace std;

// // bool check_prime(int n){
// //     for(int i=2;i*i<n;i++){
// //         if(n%i==0){
// //             return false;
// //         }

// //     }
// //     return true;
// // }
// bool check_prime(int n)
// {
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main(){

//     for(int i=2;i<=5;i++){
//         cout<<check_prime(i)<<endl;
//     }
//     return 0;
// }

#include"bits/stdc++.h"
using namespace std;

void primeSieve(int n){
    int prime[100]={0};
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i;j<=n;j+=i){
                prime[1]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main(){
    int n ;
    cin>>n; 
    primeSieve(n);
    return 0;
}