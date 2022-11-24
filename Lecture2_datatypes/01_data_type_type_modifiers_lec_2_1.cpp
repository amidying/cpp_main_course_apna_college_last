#include <iostream>
using namespace std;

// primitive data types
/*
1. int
2. float
3. char
4. boolean
[long,short,double,long long]
*/
int main()
{
    int a;     // declaration
    a = 5;     // initialization
    int b = 5; // declaratoin and initialization at a time
    // must declar variable before using
    cout << "Hello World" << endl;
    float num;
    cout << " " << sizeof(num) << endl;
    char neaz = 97;
    cout << " " << neaz << endl;
    cout << neaz << endl;
    cout << sizeof(b) << endl;
    // type modifiers like short long
    short int c = 1;
    cout << sizeof(c) << endl;
    long int d;
    cout << sizeof(d) << endl;
    unsigned int f;
    f = 5211;
    cout << f << endl;
    short int si;
    long int li;
    return 0;
}