// #include<iostream>
// using namespace std;
// void incremnt(int a){
//     a++;
// }

// void swap(int *a,int *b){
//     int temp = *a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     // int a= 10;
//     // int *aptr = &a;
//     // cout<<aptr<<endl;
//     // cout<<*aptr<<endl;
//     // *aptr = 20;
//     // cout<<a<<endl;

//     // int arr[]={1,2,3,4};
//     // cout<<*arr<<endl;
//     // int *aptr = arr;

//     // for(int i=0;i<4;i++){
//     //     cout<<*(aptr+i)<<" ";
//     // }

//     // pointer to pointers
//     // int a = 10;
//     // int *aptr = &a;
//     // int **q = &aptr;
//     // cout<<q<<endl;
//     // cout<<*q<<endl;
//     // cout<<**q<<endl;
//     // int arr[]={10,20,30};
//     // int *ptr=arr;
//     // for(int i=0;i<3;i++){
//     //     cout<<*(arr+i)<<" ";
//     // }


//     // pointer to pointer
//     /*
//     int a=10;
//     int *p = &a;
//     cout<<*p<<endl;
//     int **q=&p;
//     cout<<**q<<endl;
//     int ***r = &q;
//     cout<<***r<<endl;
//     */
//     //passing pointers to function 
//     int a=2,b=4;
//     int *aptr=&a,*bptr=&b;
//     // swap(aptr,bptr);
//     swap(&a,&b);
//     cout<<a<<" "<<b<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int a;
//     int *aptr=&a;
//     cin>>a;
//     cout<<*aptr<<endl;
//     *aptr = *aptr+20;
//     cout<<a<<endl;
//     int **pptr;
//     pptr = &aptr;
//     cout<<*pptr<<endl;
//     cout<<**pptr<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     char a = 'c';
//     char *aptr=&a;
//     cout<<*aptr<<endl;
//     bool flag =true;
//     bool *fptr = &flag;
//     cout<<*fptr<<endl;
//     return 0;
// }

// #include <iostream>
// #include"bits/stdc++.h"

// using namespace std;
// void swap(int *a,int *b){
//     int temp = *a;
//     *a = *a+*b;
//     *b = *a-temp;
//     if(*b<0){
//         *b = -(*b);
//     }
// }
// int main(){
//     int a,b;
//     int total;
//     cin>>a>>b;
//     swap(&a,&b);
//     cout<<a<<b<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int a=20;
//     int *ptr = &a;
//     int **ptr2 = &ptr;
//     int ***ptr3 = &ptr2;
//     // cout<<***ptr3<<endl;
//     int ****ptr4 = &ptr3;
//     cout<<****ptr4<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void increment(int *a){
//     *a+=10;
// }
// int main(){
//     int a=20;
//     int *aptr = &a;
//     increment(aptr);
//     cout<<a<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    int a=20;// in stack
    int *ptr = new int();
    *ptr = 22;
    cout<<*ptr<<endl;
    ptr=NULL;
    delete(ptr);
    int *ptr2 = new int[4];
    delete[]ptr2;
    ptr2=NULL;
    return 0;
}