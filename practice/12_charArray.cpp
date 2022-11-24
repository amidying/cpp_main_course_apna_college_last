// #include<iostream>
// using namespace std;

// int main(){
//     /*
//     char fruit[100]="apple";
//     int i=0;
//     while(fruit[i]!='\0'){
//         cout<<fruit[i]<<endl;
//         i++;
//     }
//     */

//    // check palindrom 
//     // int n;
//     // cout<<"Enter size of the word\n";
//     // cin>>n;
//     // char word[n+1];
//     // cout<<"enter the word"<<endl;
//     // cin>>word;
//     // bool flag=true;
//     // for(int i=0;i<n;i++){
//     //     if(word[i]!=word[n-1-i]){
//     //         flag = false;
//     //         break;
//     //     }
//     // }
//     // if(flag){
//     //     cout<<"is a palindrom\n"<<endl;
//     // }else{
//     //     cout<<"not a palindrom\n"<<endl;
//     // }


//     // check palindrom
//     // int n;
//     // cout<<"Enter n\n";
//     // cin>>n;
//     // char name[n+1];
//     // cout<<"enter name"<<endl;
//     // cin>>name;
//     // bool flag = true;
//     // int i=0;
//     // while(name[i]!='\0'){
//     //     if(name[i]!=name[n-i-1]){
//     //         flag = false;
//     //         break;
//     //     }
//     //     i++;
//     // }
//     // if(flag){
//     //     cout<<"is a palindrom"<<endl;
//     // }else{
//     //     cout<<"not a palindrom\n";
//     // }

//     // longes word in a sentence
//     int n;
//     cout<<"enter size: "<<endl;
//     cin>>n;
//     cin.ignore();
//     char arr[n+1];
//     cout<<"enter the array"<<endl;
//     cin.getline(arr,n);
//     cin.ignore();

//     int i=0;
//     int currLen = 0,maxLen = 0;
//     bool run = true;
//     while(run){
//         if(arr[i]==' ' || arr[i]=='\0'){
//             if(currLen>maxLen){
//                 maxLen=currLen;
//             }
//             currLen=0;
//         }
//         else{
//             currLen++;
//         }
//         if(arr[i]=='\0'){
//             run=false;
//         }
//         i++;
//     }
//     cout<<maxLen<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter size: "<<endl;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cout<<"enter the array"<<endl;
    cin.getline(arr,n);
    cin.ignore();

    int i=0;
    int currLen = 0, maxlen = 0;
    int st=0,maxst = 0;
    bool run = true;
    while(run){
        if(arr[i]==' ' || arr[i]=='\0'){
            if(currLen>maxlen){
                maxlen=currLen;
            }
            currLen=0;
        }else{
            currLen++;
        }
        if(arr[i]=='\0'){
            run = false;
        }
        i++;
    }
    cout<<maxlen<<endl;
    
    return 0;
}