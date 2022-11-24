
// #include"bits/stdc++.h"
// using namespace std;

// bool prime_check(int n){
//     for(int i=2;i*i<n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// void getPrime_tillN(int n){
//     for(int i=2;i<=n;i++){
//         if(prime_check(i)){
//             cout<<i<<endl;
//         }
//     }
// }
// void primeSieve(int n){
//     int prime[100]={0};
//     for(int i=2;i<=n;i++){
//         if(prime[i]==0){
//             for(int j=i*i;j<=n;j+=i){
//                 prime[i]=1;
//             }
//         }
//     }
//     for(int i=2;i<=n;i++){
//         if(prime[i]==0){
//             cout<<i<<endl;
//         }
//     }
// }
// // prime factorization using sieve
// void primeFactor(int n){
//     int spf[n+1]={0};
//     for(int i=2;i<=n;i++){
//         spf[i]=i;
//     }
//     for(int i=2;i<=n;i++){
//         if(spf[i]==i){
//             for(int j=i*i;j<=n;j+=i){
//                 if(spf[j]==j){
//                     spf[j]=i;
//                 }
//             }
//         }
//     }
//     while(n!=1){
//         cout<<spf[n]<<endl;
//         n = n/spf[n];
//     }
// }
// int main(){
//     // cout<<prime_check(5)<<endl;
//     // getPrime_tillN(50);
//     // primeSieve(50);
//     primeFactor(30);

// }

// #include"bits/stdc++.h"
// using namespace std;

// void primeSieve(int n){
//     int prime[n+1]={0};
//     for(int i=2;i<=n;i++){
//         if(prime[i]==0){
//             for(int j=i*i;j<=n;j++){
//                 prime[j]=1;
//             }
//         }
//     }
//     for(int i=2;i<=n;i++){
//         if(prime[i]==0){
//             cout<<i<<" ";
//         }
//     }cout<<endl;
// }

// int main()
// {
//     primeSieve(50);
//     return 0;
// }
// #include<iostream>
// using namespace std;


// void primeFactor(int n)
// {
//     int spf[n + 1] = {0};
//     for (int i = 2; i <= n; i++)
//     {
//         spf[i] = i;
//     }
//     for (int i = 2; i <= n; i++)
//     {
//         if (spf[i] == i)
//         {
//             for (int j = i * i; j <= n; j += i)
//             {
//                 if (spf[j] == j)
//                 {
//                     spf[j] = i;
//                 }
//             }
//         }
//     }
//     while (n != 1)
//     {
//         cout << spf[n] << " ";
//         n = n / spf[n];
//     }
// }
// int main()
// {
//     // int n;
//     // cin >> n;
//     primeFactor(50);
//     return 0;
// }
// #include"bits/stdc++.h"
// using namespace std;

// void primeFactor(int n){
//     int spf[n+1]={0}
//     for(int i=2;i<=n;i++){
//         spf[i]=i;
//     }
//     for(int i=2;i<=n;i++){
//         if(spf[i]==i){
//             for(int j=i*i;j<=n;j++){
//                 if(spf[j]==j){
//                     spf[j]=i;
//                 }
//             }
//         }
//     }
//     while(n!=1){
//         cout<<spf[n]<<" ";
//         n = n/spf[n];
//     }
// }
// int main()
// {
//     primeFactor(50);
//     return 0;
// }
// #include"bits/stdc++.h"
// using namespace std;

// bool checkPrime(int n){
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// void prime_till_n(int n){
//     for(int i=2;i<=n;i++){
//         if(checkPrime(i)){
//             cout<<i<<" ";
//         }
//     }
// }
// int main()
// {
//     prime_till_n(200);
//     return 0;
// }
// #include"bits/stdc++.h"
// using namespace std;

// bool checkPrime(int n){
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// void prime_till_n(int n){
//     for(int i=0;i<=n;i++){
//         if(checkPrime(i)){
//             cout<<i<<" ";
//         }
//     }
// }
// int main()
// {
//     prime_till_n(100);
//     return 0;
// }
// // get prime till n
// bool checkPrime(int n){
//     for(int i=0;i*i<=n;i++){
//         if(n%i==0){
//             return false;
//     }
//     return true;
// }
// void primeTillN(int n){
//     for(int i=2;i<=n;i++){
//         if(checkPrime(i)){
//             cout<<i<<" ";
//         }
//     }
// }
// #include<iostream>
// using namespace std;


// bool checkPrime(int n){
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// void primeTillN(int n){
//     for(int i=2;i<=n;i++){
//         if(checkPrime(i)){
//             cout<<i<<" ";
//         }
//     }
// }
// int main()
// {
//     primeTillN(50);    
//     return 0;
// }
// #include <iostream>
// using namespace std;

// void primeFactor(int n)
// {
//     int spf[n + 1] = {0};
//     for (int i = 2; i <= n; i++)
//     {
//         spf[i] = i;
//     }
//     for (int i = 2; i <= n; i++)
//     {
//         if (spf[i] == i)
//         {
//             for (int j = i * i; j <= n; j += i)
//             {
//                 if (spf[j] == j)
//                 {
//                     spf[j] = i;
//                 }
//             }
//         }
//     }
//     while (n != 1)
//     {
//         cout << spf[n] << " ";
//         n = n / spf[n];
//     }
// }
// int main()
// {
//     primeFactor(50);
//     return 0;
// }

// 2
// #include <iostream>
// using namespace std;

// void prime_factor(int n)
// {
//     int spf[n + 1] = {0};
//     for (int i = 2; i <= n; i++)
//     {
//         spf[i] = i;
//     }
//     for (int i = 2; i <= n; i++)
//     {
//         if (spf[i] == i)
//         {
//             for (int j = i * i; j <= n; j++)
//             {
//                 if (spf[j] == j)
//                 {
//                     spf[j] = i;
//                 }
//             }
//         }
//     }
//     while (n != 1)
//     {
//         cout << spf[n] << " ";
//         n = n / spf[n];
//     }
// }
// int main()
// {
//     prime_factor(50);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void prime_factor(int n)
// {
//     int spf[n + 1] = {0};
//     for (int i = 2; i <= n; i++)
//     {
//         spf[i] = i;
//     }
//     for (int i = 2; i <= n; i++)
//     {
//         if (spf[i] == i)
//         {
//             for (int j = i * i; j <= n; j++)
//             {
//                 if (spf[j] == j)
//                 {
//                     spf[j] = i;
//                 }
//             }
//         }
//     }
//     while (n != 1)
//     {
//         cout << spf[n] << " ";
//         n = n / spf[n];
//     }
// }

// int main()
// {
//     prime_factor(50);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void primefactor(int n)
// {
//     int spf[n + 1] = {0};
//     for (int i = 2; i <= n; i++)
//     {
//         spf[i] = i;
//     }
//     for (int i = 2; i <= n; i++)
//     {
//         if (spf[i] == i)
//         {
//             for (int j = i * i; j <= n; j += i)
//             {
//                 if (spf[j] == j)
//                 {
//                     spf[j] = i;
//                 }
//             }
//         }
//     }
//     while (n != 1)
//     {
//         cout << spf[n] << " ";
//         n = n / spf[n];
//     }
// }
// int main()
// {
//     primefactor(50);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void primefactor(int n)
// {
//     int spf[n + 1] = {0};
//     for (int i = 2; i <= n; i++)
//     {
//         spf[i] = i;
//     }
//     for (int i = 2; i <= n; i++)
//     {
//         if (spf[i] == i)
//         {
//             for (int j = i * i; j <= n; j += i)
//             {
//                 if (spf[j] == j)
//                 {
//                     spf[j] = i;
//                 }
//             }
//         }
//     }
//     while (n != 1)
//     {
//         cout << spf[n] << " ";
//         n = n / spf[n];
//     }
// }
// int main()
// {
//     primefactor(50);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// bool check_prime(int n)
// {
//     for (int i = 2; i * i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// void get_primes_till_n(int n)
// {
//     for (int i = 2; i <= n; i++)
//     {
//         if (check_prime(i))
//         {
//             cout << i << " ";
//         }
//     }
// }

// int main()
// {
//     get_primes_till_n(50);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void primeSieve(int n)
// {
//     int prime[n + 1] = {0};
//     for (int i = 2; i <= n; i++)
//     {
//         if (prime[i] == 0)
//         {
//             for (int j = i * i; j <= n; j += i)
//             {
//                 prime[j] = 1;
//             }
//         }
//     }
//     for (int i = 2; i <= n; i++)
//     {
//         if (prime[i] == 0)
//         {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
// }
// int main()
// {
//     primeSieve(50);
//     return 0;
// }

// #include"bits/stdc++.h"
// using namespace std;

// void primeSieve(int n)
// {
//     int spf[n+1]={0};
//     for(int i=2;i<=n;i++)
//     {
//         spf[i]=i;
//     }
//     for(int i=2;i<=n;i++)
//     {
//         if(spf[i]==i)
//         {
//             for(int j=i*i;j<=n;j+=i)
//             {
//                 if(spf[j]==j)
//                 {
//                     spf[j]=i;
//                 }
//             }
//         }
//     }
//     while(n!=1)
//     {
//         cout<<spf[n]<<" ";
//         n =n/spf[n];
//     }
// }

// int main()
// {
//     primeSieve(50);
//     int n;
//     cin>>n;
//     primeSieve(n);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// bool checkPrime(int n)
// {
//     for (int i = 2; i * i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// void getPrimeTilln(int n)
// {
//     for (int i = 2; i <= n; i++)
//     {
//         if (checkPrime(i))
//         {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
// }

// int main()
// {
//     getPrimeTilln(50);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void seivePrime(int n)
// {
//     int spf[100] = {0};
//     for (int i = 2; i <= n; i++)
//     {
//         if (spf[i] == 0)
//         {
//             for (int j = i * i; j <= n; j++)
//             {
//                 spf[j] = 1;
//             }
//         }
//     }
//     for (int i = 2; i <= n; i++)
//     {
//         if (spf[i] == 0)
//         {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
// }
// int main()
// {
//     seivePrime(50);
//     return 0;
// }



#include"bits/stdc++.h"
using namespace std;

bool checkPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void getPrimes(int n){
    int prime[100]={0};
    for(int i=2;i<=n;i++){
        if(checkPrime(i)){
            cout<<i<<endl;
        }
    }
}

void primeSieve(int n){
    int prime[100]={0};
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;i<=n;j+=i){
                prime[i]=1;
            }
        }
    }
    for(int i=2;i<=n;i__){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
void primeFactor(int n){
    int spf[n+1]={0};
    for(int i=2;i<=n;i++){
        spf[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    while(n!=1){
        cout<<spf[n]<<" ";
        n = n/spf[n];
    }
}
int main()
{
    getPrimes(10);
    return 0;
}

