#include <iostream>
#include<string>
using namespace std;
class Employee{
private:
    string Name;
    string Company;
    int Age;
public:    
    // constructur
    Employee(string name,string company,int age){
        Name = name;
        Company = company;
        Age = age;
    }

    // Encapulaion
    void setName(string name){
        Name = name;
    }
    void setCompany(string company){
        Company = company;
    }
    void setAge(int age){
        Age = age;
    }
    // Methods
    void IntroduceYourself(){
        cout<<"Name: "<<Name<<"\nCompany "<<Company<<"\n "<<"Age "<<Age<<endl;
    }
    
};
int main(){
    Employee em1 = Employee("Munna","Google",23);
    em1.IntroduceYourself();
    return 0;
}