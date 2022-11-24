#include"bits/stdc++.h"

using namespace std;


// reverse a string using recursion
void reverse(string s){
    if(s.length()==0){return;}
    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}
// replace pi with 3.14 "pippxxpixppxxpipixxpi"

void replacePi(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        replacePi(s.substr(2));
    }else{
        cout<<s[0];
        replacePi(s.substr(1));
    }
}
// tower of hanoi
void towerOfHanoi(int n,char src,char dest,char helper){
    if(n==0){
        return;
    }
    towerOfHanoi(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerOfHanoi(n-1,helper,dest,src);
}
// remove all duplicates from string
string removeDup(string s){
    if(s.length()==0){
        return "";
    }
    char c=s[0];
    string ans =removeDup(s.substr(1));
    if(c==ans[0]){
        return ans;
    }
    return (c+ans);
}
// move all x to the end of the string
string moveallx(string s){
    if(s.length()==0){
        return "";
    }
    char ch = s[0];
    string ans = moveallx(s.substr(1));
    if(ch=='x'){
        return (ans+ch);
    }
    return ch+ans;
}
// print all the sub strings
void subseq(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch= s[0];
    string ros = s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
}
// sub string along with their ascci code
void subseq2(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);
    subseq2(ros,ans);
    subseq2(ros,ans+ch);
    subseq2(ros,ans+to_string(code));
}
// print all the possible word from the phone digits
// not working the bello function
// string keyPadArr[]={"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
// void keypad(strin s,string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = s[0];
//     string code = keyPadArr[ch-'0'];
//     string ros = s.substr(1);
//     for(int =0;i<code.length();i++){
//         keypad(ros,ans+code[i]);
//     }
// }
// now its working
const string keyPadArr[] = {" ","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void keypad(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string code = keyPadArr[ch-'0'];
    string ros = s.substr(1);
    for(int i=0;i<code.length();i++){
        keypad(ros,ans+code[i]);
    }
}
int main(){
    // reverse("binod");
    // cout<<endl;
    // replacePi("pixxppxpxpixx");
    // towerOfHanoi(5,'A','B','C');
    // cout<<removeDup("aabcddccpp")<<endl;;
    // cout<<moveallx("pxxpxpxxxpx")<<endl;
    // subseq("ABC","");
    // subseq2("AB","");
    keypad("23","");
    return 0;
}