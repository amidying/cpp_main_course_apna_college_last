#include<iostream>
using namespace std;

int main(){
	char fruit[100]="apple";
	int i=0;
	while(fruit[i]!='\0'){
		cout<<fruit[i]<<endl;
		i++;
	}
	return 0;
}