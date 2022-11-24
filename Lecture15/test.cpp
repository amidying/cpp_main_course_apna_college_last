// // #include"bits/stdc++.h"
// #include<iostream>

// usging namespace std;

// int main()
// {
// 	cout<<"Hello World"<<endl;
// 	return 0;
// }

#include<iostream>
using namespace std;

bool primeCheck(int n)
{
	for(int i=2;i*i<n;i++)
	{
		if(n%i ==0)
		{
			return false;
		}
	}
	return true;
}
void getPrimeTillN(int n){
	for(int i=2;i<=n;i++)
	{
		if(primeCheck(i)){
			cout<<i<<" ";
		}
	}
}

int main()
{
	int n;
	cin>>n;
	getPrimeTillN(n);
	return 0;
}