



#include"bits/stdc++.h"
using namespace std;

// pascale triangle
int facto(int n)
{
    int mult=1;
    for(int i=1;i<=n;i++)
    {
        mult *= i;
    }
    return mult;
}
int main()
{
    int n;
    cin>>n;
    // cout<<facto(n)<<endl;
    int m;
    cin>>m;
    
    return 0;
}

// #include"bits/stdc++.h"
// using namespace std;

// bool isPalindrom(int n)
// {
//     int ans=0;
//     while(x!=0)
//     {
//         int temp = x%10;
//         ans = ans*10+temp;
//         x/=10;
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<isPalindrom(n)<<endl;
//     return 0;
// }
// #include"bits/stdc++.h"
// using namespace std;

// bool isPrime(int n)
// {
//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     cout<<isPrime(5)<<endl;
//     cout<<isPrime(101)<<endl;
//     cout<<isPrime(1002)<<endl;
//     return 0;
// }


// #include"bits/stdc++.h"
// using namespace std;

// bool isPrime(int n){
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// // fibonacchi seris
// void fib(int n){
//     int t1=0,t2=1,next;
//     for(int i=1;i<=n;i++){
//         cout<<t1<<endl;
//         next=t1+t2;
//         t1=t2;
//         t2=next;
//     }
// }
// int facto(int n)
// {
//     int mult=1;
//     for(int i=1;i<=n;i++)
//     {
//         mult *=i;

//     }
//     return mult;
// }
// // nCr

// int main()
// {
//     int n;
//     cin>>n;
//     cout<<isPrime(n)<<endl;
//     fib(n);
//     cout<<facto(5)<<endl;
//     // nCr
//     cout<<(facto(5)/(facto(5-2)*facto(2)))<<endl;
//     return 0;
// }