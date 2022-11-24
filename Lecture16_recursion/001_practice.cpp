// #include"bits/stdc++.h"
// using namespace std;

// int Sum(int n){
//     if(n==0){
//         return 0;
//     }
//     int prevSum = Sum(n-1);
//     return (n+prevSum);
// }

// int power(int n,int p){
//         if(p==0){
//             return 1;
//         }
//         int prevPower = power(n,p-1);
//         return (n*prevPower);
// }
// int factorial(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     int prevNum = factorial(n-1);
//     return (n*prevNum);
// }
// int fibonacci(int n){
//     if (n==0 || n==1){
//         return n;
//     }
//     return (fibonacci(n-1)+fibonacci(n-2));
// }
// bool Sorted(int arr[],int n){
//     if(n==1){
//         return true;
//     }
//     int restArray= Sorted(arr+1,n-1);
//     return (arr[0]<arr[1] && restArray);
// }
// int main(){
//     cout<<Sum(5)<<endl;
//     cout<<Sum(100)<<endl;
//     cout<<power(2,3)<<endl;
//     cout<<power(2,4)<<endl;
//     cout<<factorial(5)<<endl;
//     cout<<fibonacci(5)<<endl;
//     cout<<fibonacci(10)<<endl;
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){cin>>arr[i];}
//     cout<<Sorted(arr,n)<<endl;
// }


// #include"bits/stdc++.h"
// using namespace std;


// int Sum(int n){
//     if(n==0){
//         return 0;
//     }
//     int prevSum=Sum(n-1);
//     return (n+prevSum);
// }

// // sum 2
// int Sum2(int n){
//     if(n==0){
//         return 0;
//     }
//     int prevSum = Sum(n-1);
//     return (n+prevSum);
// }
// int main(){
//     cout<<Sum(5)<<endl;
//     cout<<Sum2(10)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int Sum(int n){
//     if(n==0){
//         return n;
//     }
//     int prevSum = Sum(n-1);
//     return (n+prevSum);
// }

// int power(int n,int p){
//     if(p==0){
//         return 1;
//     }
//     int prevPower= power(n,p-1);
//     return (n*prevPower);
// }
// // int factorial(int n){
// //     if(n==0 || n==1){
// //         return 1;
// //     }
// //     int prevNum = factorial(n-1);
// //     return (n*prevNum);
// // }

// int factorial(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     int prevNum = factorial(n-1):
//     return (n*prevNum);
// }


// int power(int n,int p){
//     if(p==0){
//         return 1;
//     }
//     int prevPower = power(n,p-1);
//     return (n*prevPower);
// }


// int Sum(int n){
//     if(n==0){
//         return n;
//     }
//     int prevNum = Sum(n-1);
//     return (n+prevNum);
// }

// int fibonacci(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return fibonacci(n-1)+fibonacci(n-1);
// }
// int fiboancci(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return (fiboancci(n-1)+fiboancci(n-2));
// }
// int main(){
//     // cout<<Sum(5)<<endl;
//     // cout<<factorial(5)<<endl;
//     cout<<"the value of fibonacci seris is: \n";
//     cout<<fiboancci(5)<<endl;
//     return 0;
// }

//  recursion challanges

// #include"bits/stdc++.h"
// using namespace std;
// bool Sorted(int arr[],int n){
//     if(n==1){
//         return true;
//     }
//     int restArray = Sorted(arr+1,n-1);
//     return (arr[0]<arr[1] && restArray);
// }
// bool Sorted(int arr[],int n){
//     if(n==1){
//         return true;
//     }
//     int restArr= Sorted(arr+1,n-1);
//     return (a[0]<a[1] && restArr);
// }

// bool Sorted(int arr[],int n){
//     if(n==1){
//         return true;
//     }
//     int restArray = Sorted(arr+1,n-1);
//     return (arr[0]<arr[1] && restArray);
// }

// bool Sorted(int arr[],int n){
//     if(n==1){
//         return true;
//     }
//     int restArry = Sorted(arr+1,n-1);
//     return (arr[0]<arr[1] &&  restArry);
// }

// // decreament
// void dec(int n){
//     if(n==0){
//         cout<<"1"<<endl;
//         return;
//     }
//     cout<<n<<endl;
//     dec(n-1);
// }
// void dec(int n){
//     if(n==0){
//         cout<<"1"<<endl;
//         return;
//     }
//     cout<<n<<endl;
//     dec(n-1);
// }
// void dec(int n){
//     if(n==0){
//         cout<<"1"<<endl;
//         return;
//     }
//     cout<<n<<endl;
//     dec(n-1);
// }
// // increment
// void inc(int n){
//     if(n==0){
//         cout<<"1"<<endl;
//         return;
//     }
//     inc(n-1);
//     cout<<n<<endl;
// }
// first and last occarance of the array

// first
// int firstocc(int arr[],int n,int i,int key){
//     if(i=n){
//         return -1;
//     }
//     if(arr[i]==key){
//         return i;
//     }
//     return firstocc(arr,n,i+1,key);
// }
// int firstocc(int arr[],int n,int i,int key){
//     if(i==n){
//         return -1;
//     }
//     if(arr[i]==key){
//         return i;
//     }
//     return firstocc(arr,n,i+1,key);
// }
// int firstocc(int arr[],int n,int i,int key){
//     if(i==n){
//         return -1;
//     }
//     if(arr[i]==key){
//         return i;
//     }
//     return firstocc(arr,n,i+1,key);
// }
// // last occerance
// int lastocc(int arr[],int n,int i,int key){
//     if(i==n){
//         return -1;
//     }
//     int restArr=lastocc(arr,n,i+1,key);
//     if(restArr!=-1){
//         return restArr;
//     }
//     if(arr[i]==key){
//         return i;
//     }
//     return -1;
// }
// bool isSorted(int arr[],int n){
//     if(n==1){
//         return true;
//     }
//     int restArry= isSorted(arr+1,n-1);
//     return (arr[0]<arr[1] && restArry);
// }
// void dec(int n){
//     if(n==0){
//         return;
//     }
//     cout<<n<<endl;
//     dec(n-1);
// }
// int main()
// {
//     // dec(5);
//     // inc(5);
//     // int arr[]={1,2,3,4};
//     // cout<<isSorted(arr,4)<<endl;
//     // int arr[]={1,2,3,2,3,2,3,4};
//     dec(5);

//     // cout<<firstocc(arr, 8,0,2)<<endl;
//     // cout<<lastocc(arr, 8,0,2)<<endl;
    
//     return 0;
// }

// #include"bits/stdc++.h"
// using namespace std;
// void reverse(string s){
//     if(s.length()==0){
//         return;
//     }
//     string ros = s.substr(1);
//     reverse(ros);
//     cout<<s[0];
// }
// // replace pi
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
// #include<iostream>
// using namespace std;

// // void reverse(string s){
// //     if(s.length()==0){
// //         return ;
// //     }
// //     string ros = s.substr(1);
// //     reverse(ros);
// //     cout<<s[0];
// // }
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
// #include<iostream>
// using namespace std;


// int main()
// {
//     // reverse("ABC");
//     // cout<<endl;
//     // reverse("WXYZ");
//     replacePi("pippiiipxxpixxx");
//     return 0;
// }

// tower of hanoi
// #include"bits/stdc++.h"
// using namespace std;
// void towerOfHanoi(int n,char src,char dest, char helper){
//     if(n==0){
//         return;
//     }
//     towerOfHanoi(n-1,src,helper,dest);
//     cout<<"Move from "<<src<<" To " <<dest<<endl;
//     towerOfHanoi(n-1,helper,dest,src);
// }
// int main()
// {
//     towerOfHanoi(3,'1','2','3');
//     return 0;
// } 
// #include"bits/stdc++.h"
// using namespace std;
// void toh(int n,char src,char dest,char helper){
//     if(n==0){
//         return;
//     }
//     toh(n-1,src,helper,dest);
//     cout<<"Move from "<<src<<" To "<<dest<<endl;
//     toh(n-1,helper,src,dest);
// }
// int main()
// {
//     toh(5,'a','sb','c');
//     return 0;
// }

// #include"bits/stdc++.h"
// using namespace std;
// void toh(int n,char src,char dest,char help){

//     if(n==0){
//         return ;
//     }
//     toh(n-1,src,help,dest);
//     cout<<"move from: "<<src<<" to: "<<dest<<endl;
//     toh(n-1,help,dest,src);
// }
// int main()
// {
//     toh(4,'a','b','c');
//     return 0;
// }


// remove duplicated
// #include"bits/stdc++.h"
// using namespace std;
// string removeDup(string s){
//     if(s.length()==0){
//         return "";
//     }
//     char ch=s[0];
//     string ans = removeDup(s.substr(1));
//     if(ch==ans[0]){
//         return ans;
//     }
//     return (ch+ans);
// }
// int main()
// {
//     cout<<removeDup("aabddccdg")<<endl;
//     return 0;
// }

// move all x to end
// #include"bits/stdc++.h"
// using namespace std;
// string moveX(string s){

//     if(s.length()==0){
//         return "";
//     }

//     char ch = s[0];
//     string ans = moveX(s.substr(1));
//     if(ch=='x'){
//         return (ans+ch);
//     }
//     return (ch+ans);
// }

// string moveA(string a){
//     if(a.length()==0){
//         return "";
//     }
//     char ch = a[0];
//     string ans = moveA(a.substr(1));
//     if(ch=='a'){
//         return (ans+ch);
//     }
//     return (ch+ans);
    
// }
// int main()
// {   
//     string x=moveX("xxnxxnsnxsw");
//     string a = moveA("aabaabbbbababab");
//     cout<<x<<endl;
//     cout<<a<<endl;
//     return 0;
// }

// #include"bits/stdc++.h"
// using namespace std;
// void subseq(string s,string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return ;
//     }
//     char ch=s[0];
//     string ros = s.substr(1);
//     subseq(ros,ans);
//     subseq(ros,ans+ch);
// }
// int main()
// {
//     subseq("ABC","");
//     return 0;
// }


// #include"bits/stdc++.h"
// using namespace std;
// void subseq(string s,string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return ;
//     }
//     char ch = s[0];
//     string ros = s.substr(1);
//     subseq(ros,ans);
//     subseq(ros,ans+ch);
// }
// int main()
// {
//     subseq("ABC","");
//     return 0;
// }

// #include"bits/stdc++.h"
// using namespace std;
// void subseq(string s,string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return ;
//     }
//     char ch = s[0];
//     int code = ch;
//     string ros = s.substr(1);
//     subseq(ros,ans);
//     subseq(ros,ans+ch);
//     subseq(ros,ans+to_string(code));
// }
// int main()
// {
//     subseq("ABC","");
//     return 0;
// }
// #include"bits/stdc++.h"
// using namespace std;
// const string keyPadArr[] = {" ","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
// void keypad(string s,string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return ;
//     }
//     char ch=s[0];
//     string code = keyPadArr[ch-'0'];
//     string ros = s.substr(1);
//     for(int i=0;i<code.length();i++){
//         keypad(ros,ans+code[i]);
//     }
// }
// int main()
// {
//     keypad("23","");

//     return 0;
// }


// recursion

// #include"bits/stdc++.h"
// using namespace std;
// int Sum(int n){
//     if(n==0){
//         return 0;
//     }
//     int prevSum = Sum(n-1);
//     return (n+prevSum);
// }
// int power(int n,int p){
//     if(p==0){
//         return 1;
//     }
//     int prevPower = power(n,p-1);
//     return (n*prevPower);
// }
// int factorial(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     int prevNum = factorial(n-1);
//     return (n*prevNum);
// }
// int fibonacci(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return fibonacci(n-1)+fibonacci(n-2);
// }
// int main()
// {
//     int n;cin>>n;
//     cout<<Sum(n)<<endl;
//     cout<<power(2,3)<<endl;
//     cout<<factorial(5)<<endl;
//     // fibonacci(5);
//     cout<<fibonacci(5)<<endl;
//     return 0;
// }


// 1. sum
// 2. power
// 3. factorial
// 4. fibonacci series

#include"bits/stdc++.h"
using namespace std;
int Sum(int n){
    if(n==0){
        return 0;
    }
    int prevSum = Sum(n-1);
    return (n+prevSum);
}
int power(int n,int p){
    if(p==0){
        return 1;
    }
    int prevPow = power(n,p-1);
    return (n*prevPow);
}
int factorial(int n){
    if(n==0 or n==1){
        return 1;
    }
    int prevFactorial=factorial(n-1);
    return (n*prevFactorial);
}
int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    cout<<Sum(100)<<endl;
    cout<<power(2,3)<<endl;
    cout<<factorial(5)<<endl;
    cout<<fibonacci(6)<<endl;
    return 0;
}







































