#include"bits/stdc++.h"
using namespace std;
// function overloading
class apnaCollege{
public:
	void fun(){
		cout<<"i am fun with no argument\n";
	}
	void fun(int x){
		cout<<"i am fun with int argument"<<endl;
	}
	void fun(double x){
		cout<<"i am fun with double argument"<<endl;
	}
};
// operator overloading still not working properly
/*
class Complex{
private:
	int real,imag;
public:
	Complex(int r,int i){
		real = r;
		imag = i;
	}
	Complex operator + (Complex const &obj){
		Complex res;
		res.imag = imag+obj.imag;
		res.real = real+obj.imag;
		return res;
	}
	void display(){
		cout<<real<<" +i"<<imag<<endl;
	}
};
*/
// runtime polymorphism
class Base{
public:
	virtual void print(){
		cout<<"This is the base class function"<<endl;
	}
	void display(){
		cout<<"This is the base display function"<<endl;
	}
};
class Derived: public Base{
public:
	void print(){
		cout<<"This is the Derived class function"<<endl;
	}
	void display(){
		cout<<"This is the Derived display function"<<endl;
	}
};

int main()
{
	// apnaCollege ac;
	// ac.fun();
	// ac.fun(5);
	// ac.fun(4.234);
	// Complex c1(12,7),c2(6,7);
	// Complex c3(18,14);
	// c3.display();
	Base *ptr;
	Derived dev;
	ptr = & dev;
	ptr->print();
	ptr->display();
	return 0;
}