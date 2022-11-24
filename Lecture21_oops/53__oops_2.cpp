#include<iostream>
using namespace std;
class student{
public:
	string name;int age;bool gender;
	// default constructor
	student(){
		cout<<"Default constructor"<<endl;
	}
	// parameterized constructer
	student(string s,int a,bool g){
		name = s;
		age = a;
		gender = g;
	}
	void setName(string s){
		name = s; 
	}
	void getName(){
		cout<<name<<endl;
	}
	void getInfo(){
		// cout<<name<<endl;
		// cout<<age<<endl;
		// cout<<gender<<endl;
		cout<<name<<" "<<age<<" "<<gender<<endl;
	}
	// copy constructor
	student(student &a){
		name = a.name;
		age = a.age;
		gender = a.gender;
	}
	// destructor
	~student(){
		cout<<"Destructor is called\n";
	}
	bool operator == (student &a){
		if(name==a.name && age == a.age && gender == a.gender){
			return true;
		}
		return false;
	}
};
// copy constructor
int main(){
	// student a("Neaz",24,0);
	// a.getName();
	// a.getInfo();
	// student b;
	// b.getInfo();
	// student c("Anika",20,1);
	// c.getInfo();
	// student d = c;
	// d.getInfo();
	cout<<"parameterized constructor\n";
	student a("Neaz",20,0);
	a.getInfo();
	// default constructor
	cout<<"default constructor\n";
	student b;
	b.getInfo();
	// copy constructor
	cout<<"copy constructor\n";
	student c= a;
	c.getInfo();
	// shallow and deep copy

	// operator overloading
	if(c==a){
		cout<<"Same"<<endl; 
	}else{
		cout<<"Not same"<<endl;
	}
	return 0;
}