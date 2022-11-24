// tiling problem
// #include"bits/stdc++.h"
// using namespace std;
// int tailingWays(int n){
// 	if(n==0){
// 		return 0;
// 	}
// 	if(n==1){
// 		return 1;
// 	}
// 	return tailingWays(n-1)+tailingWays(n-2);
// }
// int main(){
// 	cout<<tailingWays(4)<<endl;
// 	return 0;
// }
// 2. friends pairing problems

#include"bits/stdc++.h"
using namespace std;
int friendPairing(int n)
{
	if(n==0 || n==1 || n==2){
		return n;
	}
	return friendPairing(n-1)+friendPairing(n-2)*(n-1);
}
int main(){
	cout<<friendPairing(3)<<endl;
	cout<<friendPairing(5)<<endl;
}