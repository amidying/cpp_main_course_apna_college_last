#include<iostream>
#include<string>
//416 page
using namespace std;

int binaryToDecimal(int n){
    int ans=0,x=1;
    while(n>0){
        int remainder= n%10;
        ans += x*remainder;
        x *=2;
        n/=10;
    }
    return ans;
}
int octalToDecimal(int n){
    int ans=0,base=1;
    while(n>0){
        int rem=n%10;
        ans += base*rem;
        base *=8;
        n/=10;
    }
    return ans;
}
int hexadecimalToDecimal(string n,int s){
    int ans=0,base=1;
    for(int i=s-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
            ans += base*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F'){
            ans += base*(n[i]-'A'+10);
        }
        base*=16;
    }
    return ans;
}
int main(){
    string n;
    cin>>n;
    int s = n.size();
    // cout<<n<<s<<endl;
    // cout<<binaryToDecimal(n)<<endl;
    // cout<<octalToDecimal(n)<<endl;
    cout<<hexadecimalToDecimal(n,s)<<endl;
    return 0;
}
