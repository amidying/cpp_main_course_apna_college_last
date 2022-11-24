#include<iostream>
using namespace std;

int Sum(int n)
{
    if(n==0){
        return 0;
    }
    int prevSum=Sum(n-1);
    return (n+prevSum);
}
int power(int n,int p)
{
    if(p==0){
        return 1;
    }
    int prevPower = power(n,p-1);
    return n*prevPower;
}
int factorial(int n)
{
    if(n==0 || n==1){
        return 1;
    }
    int prevNum=factorial(n-1);
    return n*prevNum;
}
int fibonacci(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    cout<<Sum(100)<<endl;
    cout<<power(3,3)<<endl;
    cout<<factorial(5)<<endl;
    cout<<fibonacci(5)<<endl;
    return 0;
}