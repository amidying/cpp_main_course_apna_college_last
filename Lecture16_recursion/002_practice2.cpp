#include"bits/stdc++.h"
using namespace std;
void reverse(string s){
    if(s.length()==0){
        return;
    }
    reverse(s.substr(1));
    cout<<s[0];
}
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
void toh(int n,char src,char dest,char helper){
    if(n==0){
        return;
    }
    toh(n-1,src,helper,dest);
    toh(n-1,helper,dest,src);
    cout<<"From "<<src<<" To "<<dest<<endl;
}
// string removeDup(string s){
//     if(s.length()==0){
//         return "";
//     }
//     char ch=s[0];
//     string ros = removeDup(s.substr(1));
//     if(ch==ros[0]){
//         return ros;
//     }
//     return (ch+ros);
// }

string removeDup(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ros = removeDup(s.substr(1));
    if(ch==ros[0]){
        return ros;
    }
    return (ch+ros);
}

string moveX(string s){
    if(s.length()==0){
        return "";
    }
    char ch= s[0];
    string ros = moveX(s.substr(1));
    if(ch=='x'){
        return (ros+ch);
    }
    return (ch+ros);
}
void subseq(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
}
void subseq2(string s,string ans){

    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code = ch;
    string ros = s.substr(1);
    subseq2(ros,ans);
    subseq2(ros,ans+ch);
    subseq2(ros,ans+to_string(code));
}
const string keyPadArr[]={"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void keypad(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string code = keyPadArr[ch-'0'];
    string ros = s.substr(1);
    for(int i=0;i<code.length();i++){
        keypad(ros,ans+code[i]);
    }
}
int main()
{
    // reverse("ABC");
    // replacePi("pippixipi");
    // toh(5,'A','B','C');
    // cout<<removeDup("xxyyxxyyzz")<<endl;;
    // cout<<moveX("xxyyxxyyzz")<<endl;
    // subseq("ABC","");
    // subseq2("ABC","");
    keypad("34","");


    return 0;
}