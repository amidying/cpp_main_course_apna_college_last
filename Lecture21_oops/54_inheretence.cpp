#include"bits/stdc++.h"
using namespace std;
// not working properly man
class school{
private:
	string vcName="Harunur Rasid";
public:
	string name="IU,Kushtia"; 
	int stunum=16000;
	void getName(){
		cout<<name<<endl;
	}
	void geteStudent(){
		cout<<stunum<<endl;
	}
};
class student: public school{
public:
	string name; 
	string depatment;
	int roll;
	int id;
	void getInf(){
		cout<<name<<endl;
		cout<<depatment<<endl;
		cout<<roll<<endl;
		cout<<id<<endl;
	}
};
int main(){
	student s1("Ali Neaz","Statistics",1722019,1591);
	s1.getInfo();
	return 0;
}