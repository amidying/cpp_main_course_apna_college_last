#include<iostream>
using namespace std;

int main(){
    // char fruit[100]="apple";
    // int i=0;
    // while(fruit[i]!='\0'){
    //     cout<<fruit[i]<<endl;
    //     i++;
    // }

    // i/o
    // char name[100];
    // cout<<"Enter a name";
    // cin>>name;
    // cout<<name<<endl;;
    // // accesing index wise 
    // cout<<name[2]<<endl;

    // check palindrom word 
    /*
    int n;
    cout<<"Enter size of thw word\n";
    cin>>n;
    char word[n+1];
    cout<<"Enter the word"<<endl;
    cin>>word;
    bool flag = true;
    for(int i = 0;i<n;i++){
        if(word[i] != word[n-1-i]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"Is a palindrom\n"<<endl;
    }else{cout<<"Not a palindrom\n";} */

    // largest word in a sentence
    int n;
    cout<<"Enter size: \n";
    cin>>n;
    cin.ignore();
    char sen[n+1];
    cout<<"Enter the sentence\n";
    cin.getline(sen,n);
    cin.ignore();

    int i=0;
    int currLen = 0 ,maxLen = 0;
    int st = 0 ,maxst = 0;
    while(true){
        if(sen[i]==' ' || sen[i]=='\0'){
            if(currLen>maxLen){
                maxLen = currLen;
                maxst=st;
            }
            currLen = 0;
            st=i+1;
        }
        else
            currLen++;
        if(sen[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<maxLen<<endl;
    for(int i=0;i<maxLen;i++){
        cout<<sen[i+maxst];
    }
    cout<<endl;

    return 0;
}