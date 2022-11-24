// preprocessor directive for using input output
#include <iostream>
using namespace std;
// execution starts here
int main()
{
    // std::cout << "Hello World\n";
    int father_gave, mother_gave;
    cout << "How much father gave? \n";
    cin >> father_gave;
    cout << "How much mother gave? \n";
    cin >> mother_gave;
    cout << "Total amount now: \n" << father_gave + mother_gave;
    return 0;
}