#include<iostream>
using namespace std;

int main(){

	int n;
	cout<<"Enter the size of the word: \n";
	cin>>n;
	char word[n+1];
	cout<<"Enter the word: \n";
	cin>>word;
	bool flag = true;
	for(int i=0;i<n;i++){
		if(word[i] != word[n-1-i]){
			flag=false;break;
		}
	}
	if(flag)
			cout<<"Not a a palindrom.\n";
	else
		cout<<"Is a palindrom.\n";
	return 0;
}