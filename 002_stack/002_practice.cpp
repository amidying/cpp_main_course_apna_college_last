#include"bits/stdc++.h"
using namespace std;
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    return b;
}
int rain_water(vector<int> a)
{
    int n = a.size();
    int left = new int[n];
    int right = new int[n];
    left[0]=a[0];
    for(int i=1;i<n;i++)
    {
        left[i]=max(left[i-1],a[i]);
    }
    right[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        right[i]=max(right[i+1],a[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans += min(left[i],right[i])-a[i];
    }
    return ans;
}
int main(){
    vector<int> a={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<rain_water(a)<<endl;
    return 0;
}