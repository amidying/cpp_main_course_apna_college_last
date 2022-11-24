// vecotr
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	vector<int> v;
	v.push_back(1);
	v.push_back(2); 
	v.push_back(3);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	vector<int>::iterator it; 
	for(it=v.begin();it!=v.end();it++){
		cout<<*it<<endl;
	}
	for(auto elm:v){
		cout<<elm<<endl;
	}
	// pop_back()
	v.pop_back();
	for(auto i:v){
		cout<<i<<" ";
	}cout<<endl;
	// same element of fixed size
	vector<int> v2(3,50);//50 50 50
	for(auto i:v2){
		cout<<i<<" ";
	}cout<<endl;
	// swping vectors
	swap(v,v2);
	for(auto elm:v){
		cout<<elm<<endl;
	}
	for(auto i:v2){
		cout<<i<<" ";
	}cout<<endl;
	// sorting
	sort(v.begin(),v.end());
	for(auto elm:v){
		cout<<elm<<endl;
	}
	return 0;

}