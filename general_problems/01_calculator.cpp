#include <iostream>

using namespace std;

int main()
{

    bool run = 1;
    while (run)
    {
        float num1, num2;
        cout << "Enter two num: \n";
        cin >> num1 >> num2;
        char op;
        cout << "Enter operation: \n";
        cin >> op;
        cout << "enter q to quit..\n";
        switch (op)
        {
        case '+':
            cout << num1 + num2;
            break;
        // case '-':
        //     cout << num1 - num2;
        //     break;
        // case '*':
        //     cout << num1 * num2;
        //     break;
        case '/':
            cout << num1 / num2;
            break;
        default:
            cout << "Make sure entered the right keyward.\n";
            break;
        }
        if (op == 'q' || op == 'Q')
        {
            run = 0;
        }
    }
    return 0;
}