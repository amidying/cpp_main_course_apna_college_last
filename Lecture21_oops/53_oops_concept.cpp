#include"bits/stdc++.h"
using namespace std;
class student{
        string name;
public:

    int age;
    bool gender;
    void printInfo(){
        cout<<"Name: ";
        cout<<name<<endl;
        cout<<"Age: ";cout<<age<<endl;
        cout<<"Gender: ";cout<<gender<<endl;
    }
    // constructer get called by default
    
    // setter function
    void setname(string s){
        name=s;
    }
    // getter function
    void getName(){
        cout<<name<<endl;
    }
};
int main()
{
    // student a;
    // string s;
    // // a.name="Neaz";a.age=24;a.gender=0;
    // // rather make array for many objects;
    // student arr[3];
    // for(int i=0;i<3;i++){
    //     // cin>>arr[i].name;
    //     cin>>s;
    //     arr[i].setname(s);
    //     cin>>arr[i].age;
    //     cin>>arr[i].gender;
    // }
    // for(int i=0;i<3;i++){
    //     arr[i].printInfo();
    // }
    // arr[0].getName();
    

    // constructer

    return 0;
}