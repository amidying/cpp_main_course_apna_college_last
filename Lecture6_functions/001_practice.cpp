
#include"bits/stdc++.h"

using namespace std;

int binaryToDecimal(int n){
    int ans=0,temp=1;
    while(n!=0){
        int rem= n%10;
        ans += rem*temp;
        temp *=2;
        n/=10;
    }
    return ans;
}
int hextoDecimal(string n){
    int ans=0;
    int x=1;
    int s=n.size();
    for(int i=s-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
            ans += x*(n[i]-'0');
        }else if(n[i]>='A' && n[i]<='F'){
            ans += x*(n[i]-'A'+10);
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<binaryToDecimal(n)<<endl;
    string str="23A";
    cout<<hextoDecimal(str)<<endl;
    return 0;
}

// #include"bits/stdc++.h"
// using namespace std;


// int max(int a,int b){
//     if(a>b){return a;}
//     return b;
// }
// bool isPythagoreanTriplet(int a,int b,int c){
//     int biggest = max(a,max(b,c));
//     int x,y,z;
//     x=biggest;
//     if(x==a){y=b;z=c;}
//     else if(x==b){y=a;z=c;}
//     else{y=a;z=b;}
//     if(x*x==y*y+z*z){return true;}
//     return false;
// }
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     cout<<isPythagoreanTriplet(a,b,c)<<endl;
//     return 0;
// }


// #include"bits/stdc++.h"

// using namespace std;

// int max(int a,int b){
//     if(a>b){return a;}
//     return b;
// }

// bool isPythagoreanTriplet(int a,int b,int c){
//     int biggest=max(a,max(b,c));
//     int y,z;
//     if(biggest==a){y=b;z=c;}
//     else if(biggest==b){y=a;z=c;}else{y=a;z=b;}
//     if(biggest*biggest==(y*y+z*z)){return true;}
//     return false;
// }

// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     cout<<isPythagoreanTriplet(a,b,c)<<endl;
//     return 0;
// }