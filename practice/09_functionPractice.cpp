// #include "bits/stdc++.h"
// #include<string.h>

// using namespace std;
// // sum of n numbers
// int isPythagoreanTriplet(int a,int b,int c){
//     int mx = max(a,max(b,c));
//     int d,f;
//     if(mx==a){
//         d=b;f=c;
//     }else if(mx==b){
//         d=a;f=c;
//     }else{
//         d=a;f=b;
//     }
//     if(mx*mx==d*d+f*f){
//         return 1;
//     }
//     return -1;
// }
// int binaryToDecimal(int n){
//     int base=1;
//     int des =0;
//     while(n != 0){
//         int temp = n%10;
//         des += base*temp;
//         base *=2;
//         n = n/10;
//     }
//     return des;
// }
// int decimalToBinary(int n){
//     int x=1;
//     int ans=0;
//     while(x<=n){
//         x*=2;
//     }
//     x/=2;
//     while(x>0){
//         int lastDigit = n/x;
//         n-=lastDigit*x;
//         x/=2;
//         ans=ans*10+lastDigit;
//     }
//     return ans;
// }
// int decimalToOctal(int n){
//     int x=1;
//     int ans=0;
//     while(x<=n){
//         x*=8;
//     }
//     x/=8;
//     while(x>0){
//         int lastDigit = n/x;
//         n -= lastDigit*x;
//         x/=8;
//         ans = ans*10+lastDigit;
//     }
//     return ans;
// }
/*
int decimalToHexadecimal(int n){
    int x=1;
    int ans = 0;
    while(x<=n){
        x*=16;
    }
    x /= 16;
    while(x>0){
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /=16;
        if(lastDigit<=9){
            ans = ans + to_string(lastDigit);
        }else{
            char c= 'A'+lastDigit-10;
            ans.push_back(c);
        }
    }
    return ans;
}
*/
// int max(int a,int b){
//     if(a>b){
//         return a;
//     }
//     return b;
// }

// bool pythgoreanTriplet(){
//     int a,b,c;cin>>a>>b>>c;
//     float hypotenus = max(a,max(b,c));
//     int base,opposit;
//     if(hypotenus==a){
//         base=b;opposit=c;
//     }else if(hypotenus==b){
//         base=c;opposit=a;
//     }else{
//         base = b;
//         opposit=a;
//     }

//     if(pow(hypotenus,2)==pow(base,2)+pow(opposit,2)){
//         return true;
//     }
//     return false;

// }
// int decimalToBinary(int n){
//     int base=2;
//     while(base<n){
//         base*=2;
//     }
//     base/=2;
//     int ans=0;
//     while(n!=0){
//         int rem = n/base;
//         ans = ans*10+rem;
//         n/=2;
//     }
//     return ans;
// }
// void hexToDecimal(){
//     string n;cout<<"Enter n:\n";
//     cin>>n;
//     int ans=0,x=1;
//     int s= n.size();
//     for(int i=s-1;i>=0;i--){
//         if(n[i]>='0'&&n[i]<='9'){
//             ans +=x*(n[i]-'0');
//         }else if(n[i]>='A' && n[i]<='F'){
//             ans += x*(n[i]-'A'+10);
//         }
//         x*=16;
//     }
//     cout<<ans<<endl;

// }
// incomplete
/*
void decimalToHexadecimal(){
    int n;
    cout<<"Enter n\n";
    cin>>n;
    int x=1;
    string ans = "";
    while(x<=n){
        x *=16;
    }
    x /= 16;
    while(x>0){
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /= 16;
    }
    

}
*/
// int main(){
    // pythagorean triplet
    // int a,b,c;
    // cin>>a>>b>>c;
    // if(isPythagoreanTriplet(a,b,c)==1){
    //     cout<<"Pythagorean Triplet";
    // }else{
    //     cout<<"Not a pythagorean Triplet";
    // }

    // binary to decimal
    // int n;
    // cin>>n;s
    // cout<<binaryToDecimal(n)<<endl;
    // decimal to binary 
    // int n;
    // cin>>n;
    // cout<<decimalToBinary(n)<<endl;
    // cout<<decimalToOctal(n)<<endl;
    // cout<<decimalToHexadecimal(n)<<endl;

    //------------------------------------------//
    //-------------advance functions------------//
    //-----------------------------------------//

    // 1. pythagorean triplet
    // bool flag =pythgoreanTriplet();
    // if(flag){
    //     cout<<"Pythargoean Triplet"<<" ";
    // }else{
    //     cout<<"Not pythagorean Triplet"<<" ";
    // }
    // 2. decimal to binary
    // int n;
    // cin>>n;
    // cout<<decimalToBinary(n)<<endl;

    //3. Hexadecimal To Deciaml
    // hexToDecimal();

    //4. add two binary number
    
//     return 0;
// }

/*
#include<iostream>
#include<climits>
using namespace std;
// traverse over the digits and make decimal number
int octalToDecimal(int n){
    int ans=0;
    int base = 1;
    while(base<=n){
        base *=8;
    } base /=8;
    while(n!=0){
        int temp = n%10;
        ans += temp*base;
        n /= 10;
        base /= 8;
    }
    return ans;
}
int main(){
    // binary to decimal
    int n;
    cout<<"Enter n\n";cin>>n;
    int ans = octalToDecimal(n);
    cout<<ans<<endl;
    return 0;
}
*/

// #include<iostream>
// #include<string.h>
// #include"bits/stdc++.h"
// using namespace std;
// int binaryToDecimal(int n){
//     int ans = 0;
//     int x = 1;
//     while(n>0){
//         int y = n%10;
//          ans += x*y;
//           x*=2;
//           n /= 10;
//     }
//     return ans;
// }
// int octalToDecimal(int n){
//     int ans = 0;
//     int x = 1;
//     while(n>0){
//         int y = n%10;
//         ans += y*x;
//         x *=8;
//         n /= 10;
//     }
//     return ans;
// }
// int hexToDecimal(string n){
//     int ans = 0;
//     int x= 1;
//     int s= n.size();
//     for(int i=s-1;i>=0;i++){
//         if(n[i]>='0' && n[i]<='9'){
//             ans += x*(n[i]-'0');
//         }
//         else if(n[i]>='A' && n[i]<='F'){
//             ans += x*(n[i]-'A'+10);
//         }
//         x*=16;
//     }
//     return ans;
// }
// int main(){
//     // int n;
//     // cin>>n;
//     // cout<<binaryToDecimal(n)<<endl;
//     // cout<<octalToDecimal(n)<<endl;
//     string n;
//     cout<<"Enter n\n";cin>>n;
//     cout<<hexToDecimal(n)<<endl;
//     return 0;
// }



// #include<iostream>
// #include<string.h>
#include"bits/stdc++.h"
using namespace std;

// int decimalToOctal(int n){
//     int ans = 0, x=1;
//     while(x<=n){
//         x *=8;// octal is base 8
//     }
//     x /= 8;
//     while(x>0){
//         int lastdigit = n/x;
//         n -= x*lastdigit;
//         ans = ans*10+lastdigit;
//         x/=8;
//     }
//     return ans;
// }
// int decimalToOctal2(int n){
//     int ans =0,x=1;
//     while(x<=n){
//         x *=8;
//     }
//     x /=8;
//     while(x>0){
//         int lastDigit = n/x;
//         n -= lastDigit*x;
//         ans = ans*10+lastDigit;
//         x /=-8;
//     }
//     return ans;
// }
// int decimalToOctal3(int n){
//     int ans =0, x=1;
//     while(x<=n){
//         x *=8;
//     }
//     x /= 8;
//     while(x>=0){
//         int lastdigit = n/x;
//         n -= lastdigit*x;
//         ans = ans*10+lastdigit;
//         x/=8;
//     }
//     return ans;
// }
// int decimalToOctal(int n){
//     int ans =0, x=1;
//     while(x<=n){
//         x *=8;
//     }
//     x /=8;
//     while(x>=0){
//         int lastdigit = n/x;
//         n -= lastdigit*x;
//         ans = ans*10+lastdigit;
//         x/=8;
//     }
//     return ans;
// }
void decimalToHexadecimal(int n){
    int x=1;
    string ans = "";
    while(x<=n){
        x*=16;
    }
    x /=16;
    while(x>0){
        int lastdigit = n/x;
        n -= x*lastdigit;
        x/=16;
        if(lastdigit<=9){
            ans = ans+to_string(lastdigit);
        }
        else{
            char c='A'+lastdigit-10;
            ans.push_back(c);
        }

    }
    cout<<ans<<endl;
    // return ans;
}

string decimalToHexadecimal2(int n){
    int x=1;
    string ans="";
    while(x<=n){
        x*=16;
    }
    x /=16;
    while(x>0){
        int lastdigit = n/x;
        n -= x*lastdigit;
        x/=16;
        if(lastdigit<=9){
            ans = ans+to_string(lastdigit);
        }
        else{
            char c = 'A'+lastdigit-10;
            ans.push_back(c);
        }

    }
    return ans;
}
string decimalToHexadecimal3(int n){
    int x=1;
    string ans ="";
    while(x<n){
        x*=16;
    }x/=16;
    while(x>0){
        int lastdigit = n/x;
        n -= lastdigit*x;
        x/=16;
        if(lastdigit<=9){
            ans +=to_string(lastdigit);
        }else{
            char c='A'+lastdigit-10;
            ans.push_back(c);
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    // cout<<decimalToOctal(n)<<endl;
    // char ans[100] = decimalToHexadecimal(n);
    // cout<<ans<<endl;
    // decimalToHexadecimal(n);
    cout<<decimalToHexadecimal2(n)<<endl;
    return 0;
}