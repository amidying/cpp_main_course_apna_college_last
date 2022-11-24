#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// 4. count max occuring alphabet
int main()
{
    string s = "ald rfeladf adsfioefjas asdfjsdf";
    int count[26];
    for (int i = 0; i < 26; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        count[s[i] - 'a']++;
    }
    char ans = 'a';
    int maxF = 0;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > maxF)
        {
            maxF = count[i];
            ans = i + 'a';
        }
    }
    cout << maxF << " " << ans << endl;
    return 0;
}

// 3. form the biggest number from the numberic string
/*
int main()
{
    string num = "4232";
    sort(num.begin(), num.end(), greater<int>());
    cout << num << endl;
    return 0;
}
*/
// 2. uppercae or lowercase using function
/*
int main()
{
    string str = "ald A dc LHOAdd ndld";
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str << endl;
    return 0;
}
*/

// 1. converting string to uppercase or lowercase
/*
int main()
{
    string str = "aldfje afeafsdf";
    // cout << 'a' - 'A' << endl;
    // to uppercase
    for (int i = 0; i < size(str); i++)
    {
        // str[i] -= 32;
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    cout << str << endl;
    // converting to lowercase
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    cout << str << endl;
    return 0;
}
*/