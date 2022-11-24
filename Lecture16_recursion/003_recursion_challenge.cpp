// // #include"bits/stdc++.h"
// // using namespace std;
// // // sorted array
// // bool sorted(int arr[],int n){
// //     if(n==1){
// //         return true;
// //     }
// //     int restArr = sorted(arr+1,n-1);
// //     return (arr[0]<arr[1] && restArr);
// // }
// // // decreament
// // void dec(int n){
// //     if(n==0){
// //         cout<<"1"<<endl;
// //         return;
// //     }
// //     cout<<n<<endl;
// //     dec(n-1);
// // }
// // // increment
// // void increment(int n){
// //     if(n==1){
// //         cout<<"1"<<endl;
// //         return;
// //     }
// //     increment(n-1);
// //     cout<<n<<endl;
// // }
// // int firstocc(int arr[],int n,int i,int key){
// //     if(i==n){
// //         return -1;
// //     }
// //     if(arr[i]==key){
// //         return i;
// //     }
// //     return firstocc(arr,n,i+1,key);
// // }
// // // int lastocc(int arr[],int n,int i,int key);{
// // //     if(i==n){
// // //         return -1;
// // //     }
// // //     int restArr = lastocc(arr,n,i+1,key);
// // //     if(restArr !=-1){
// // //         return restArr;
// // //     }
// // //     if(arr[i]==key){
// // //         return i;
// // //     }
// // //     return -1;

// // // }
// // int lastocc(int arr[],int n,int i,int key){
// //     if(i==n){
// //         return -1;
// //     }
// //     int restArr = lastocc(arr,n,i+1,key);
// //     if(restArr !=-1){
// //         return restArr;
// //     }
// //     if(arr[i]==key){
// //         return i;
// //     }
// //     return -1;
// // }
// // int main()
// // {
// //     int n;cin>>n;
// //     int arr[n];
// //     for(int i=0;i<n;i++){
// //         cin>>arr[i];
// //     }
// //     // cout<<sorted(arr,n)<<endl;
// //     // dec(5);
// //     // increment(5);
// //     // cout<<firstocc(arr,n,0,5)<<endl;
// //     cout<<lastocc(arr,n,0,5)<<endl;
// //     return 0;
// // }

// // #include"bits/stdc++.h"
// // using namespace std;
// // void inc(int n){
// //     if(n==1){
// //         cout<<"1"<<endl;;
// //         return;
// //     }
// //     inc(n-1);
// //     cout<<n<<endl;
// // }
// // void dec(int n){
// //     if(n==1){
// //         cout<<"1"<<endl;
// //         return;
// //     }
// //     cout<<n<<endl;
// //     dec(n-1);
// // }
// // int main()
// // {
// //     inc(5);
// //     dec(10);
// //     return 0;
// // }


// // 40--------------------------------------
// #include"bits/stdc++.h"
// using namespace std;
// void revstr(string s){
//     if(s.length()==0){
//         return;
//     }
//     string ros = s.substr(1);
//     revstr(ros);
//     cout<<s[0];
// }
// void replacePi(string s){
//     if(s.length()==0){
//         return;
//     }
//     if(s[0]=='p' && s[1]=='i'){
//         cout<<"3.14";
//         replacePi(s.substr(2));
//     }else{
//         cout<<s[0];
//         replacePi(s.substr(1));
//     }
// }
// void toh(int n,char src,char dest,char helper){
//     if(n==0){
//         return;
//     }
//     toh(n-1,src,helper,dest);
//     cout<<"Move from: "<<src<<" to: "<<dest<<endl;
//     toh(n-1,helper,dest,src);
// }
// string removeDup(string s){
//     if(s.length()==0){
//         return "";
//     }
//     char c=s[0];
//     string ans = removeDup(s.substr(1));
//     if(c==ans[0]){
//         return "";
//     }
//     return (c+ans);
// }
// string moveallX(string s){
//     if(s.length()==0){
//         return "";
//     }
//     char ch= s[0];
//     string ans = moveallX(s.substr(1));
//     if(ch=='x'){
//         return (ans+ch);
//     }
//     return ch+ans;
// }
// int main()
// {
//     // string s="hello world";
//     // revstr(s);
//     // cout<<endl;
//     // replacePi("pippxxpi");
//     // toh(4,'a','b','c');
//     string s="abccb";
//     cout<<removeDup(s)<<endl;
//     cout<<moveallX("xxyy")<<endl;
//     return 0;
// }

// #include"bits/stdc++.h"
// using namespace std;
// string moveAllX(string s){
//     if(s.length()==0){
//         return "";
//     }
//     char ch=s[0];
//     string ros = moveAllX(s.substr(1));
//     if(ch=='x' || ch=='X'){
//         return ros+ch;
//     }
//     return ch+ros;
// }
// void subseq(string s,string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch=s[0];
//     string ros = s.substr(1);
//     subseq(ros,ans);
//     subseq(ros,ans+ch);
// }
// int main()
// {
//     // cout<<moveAllX("xyx");
//     subseq("ABC","");
//     return 0;
// }

#include"bits/stdc++.h"
using namespace std;
void permutation(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        char ch=s[0];
        string ros = s.substr(0,i)+s.substr(i+1);
        permutation(ros,ans+ch);
    }
}
// count the number of path in a board game
int countPath(int s,int e){
    if(e==s){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count=0;
    for(int i=0;i<=6;i++){
        count += countPath(s+i,e);
    }
    return count;
}
int main()
{
    permutation("ABC","");
    cout<<countPath(1,5)<<endl;
    return 0;
}