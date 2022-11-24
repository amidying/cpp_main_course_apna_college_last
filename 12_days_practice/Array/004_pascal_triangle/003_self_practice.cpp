#include <iostream>
using namespace std;
int facotrial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*facotrial(n-1);
}
int nCr(int n,int r){
    int nfac = facotrial(n);
    int rfac = facotrial(r);
    return (nfac/(rfac*facotrial(n-r)));
}
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}