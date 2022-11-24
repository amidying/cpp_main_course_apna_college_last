#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter your choice: \n";
    cout << "1. Hello world\n2. How are you\n3. What are you doing?\n4. Want to go home?\n";
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "Hello World";
        break;
    case 2:
        cout << "How are you?";
        break;
    case 3:
        cout << "What are you doing?";
        break;
    case 4:
        cout << "Want to go home?";
        break;
    default:
        cout << "Have a lovely day sir.";
        break;
    }
    return 0;
}