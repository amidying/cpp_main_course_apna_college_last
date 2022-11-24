#include<iostream>


using namespace std;


int main(){
    int n=5;
    // cout<<"Enter a number: \n";
    // cin>>n;
    int i,j;
    /*
    //rectangle
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    // triangle
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    //holo triangle
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || i==5 || j==1 || j==5){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    //inverted pyramid
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    //special ones
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    // print numbers
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    int count=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        int spaces=2*n-2*i;
        for(j=1;j<=spaces;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        int spaces=2*n-2*i;
        for(j=1;j<=spaces;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    */
    // second part
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<1<<" ";
            }else{
                cout<<0<<" ";
            }
            
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<0<<" ";
            }
            else{
                cout<<1<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if((i+j)%2==0){
                cout<<1<<" ";
            }else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
    // rombus pattern
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}