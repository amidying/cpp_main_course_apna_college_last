#include <iostream>
using namespace std;
bool checkPalindrom(int x){
    if(x<0){
        return false;
    }
    int xtemp=x;
    int temp;
    int ret=0;
    while(x!=0){
        temp = x%10;
        ret = ret*10+temp;
        x /=10;
    }
    if(xtemp==ret){
        return true;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t){
        int x;
        cin>>x;
        cout<<checkPalindrom(x)<<endl;
        t--;
    }
    
    return 0;
}