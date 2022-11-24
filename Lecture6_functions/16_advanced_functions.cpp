#include<iostream>
#include<cmath>
#include<string>


using namespace std;
int max(int x,int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}
bool checker(int x,int y,int z){
    int hypotenous,base,oposit;
    hypotenous=max(x,max(y,z));
    if(x==hypotenous){
        base=y,oposit=z;
    }else if(hypotenous==y){
        base=x,oposit=z;
    }else{
        base=x,oposit=y;
    }
    if(pow(hypotenous,2)==pow(base,2)+pow(oposit,2)){
        return true;
    }else
        return false;
}

int binaryToDecimal(int n){
    int ans=0, temp=1;
    while(n!=0){
        int remainder=n%10;
        ans += temp*remainder;
        temp *=2;
        n/=10;
    }
    return ans;
}

int octalToDecimal(int n){
    int ans=0,temp=1;
    while(n!=0){
        int remainder = n%10;
        ans +=temp*remainder;
        temp *=8;
        n /=10;
    }
    return ans;
}

int hexToDecimal(string n){
    int ans=0;
    int x=1;
    int s = n.size();
    for(int i=s-1;i>=0;i--){
        if(n[i]>= '0' && n[i]<='9'){
            ans += x*(n[i]-'0');
        }else if(n[i]>='A'&& n[i]<='F'){
            ans += x*(n[i]-'A'+10);
        }
        x*=16;
    }
    return ans;
}
int decimalToBinary(int n){
    int ans=0;
    int rem;
    while(n!=0){
        rem = n%2;
        ans = ans*10+rem;
        n /= 2;
    }
    return ans;
}
int main(){
    // int x,y,z;
    // cin>>x>>y>>z;
    // bool checkFn=checker(x,y,z);
    // if(checkFn)
    //     cout<<"Pythogorian Triplet";
    // else
    //     cout<<"Not a pythogorian triplet";
    // binary to decimal
    // int n;
    // cin>>n;
    // cout<<binaryToDecimal(n)<<endl;
    // cout<<octalToDecimal(n)<<endl;
    // string n;
    // cin>>n;
    // cout<<hexToDecimal(n)<<endl;
    // decimal to binary
    int n;
    cin>>n;
    cout<<decimalToBinary<<endl;
    return 0;
}