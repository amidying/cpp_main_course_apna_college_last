// #include"bits/stdc++.h"
// using namespace std;
// int knapsack(int value[],int wt[],int n,int W){
//     if(n==0 || w==0){
//         return 0;
//     }
//     if(wt[n-1]>W){
//         return knapsack(value,we,n-1,W);
//     }
//     return max(knapsack(value,wt,n-1,W-wt[n-1]+value[n-1],knapsack(value,wt,n-1,W));

// }
// int main()
// {
//     int value[]={100,50,150};
//     int wt[]={10,20,30};
//     int W=50;
//     cout<<knapsack(value,wt,3,W)<<endl;
//     return 0;
// }

#include"bits/stdc++.h"
using namespace std;
int friendParing(int n){
    if(n==0 || n==1 || n==2){
        return n;
    }
    return friendParing(n-1)+friendParing(n-2)*(n-1);
}
int main()
{
    cout<<friendParing(3)<<endl;
    return 0;
}