#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// sorting a string
int main()
{
    string s1 = "aldjfe aejlkr";
    sort(s1.begin(), s1.end());
    cout << s1 << endl;
    return 0;
}

// // string to integer a number
// int main()
// {
//     string str = "232";
//     int n = stoi(str);
//     cout << n << endl;
//     // integer to string
//     string myString;
//     myString = to_string(n);
//     cout << myString << endl;
//     return 0;
// }

// sub string
// int main()
// {
//     string str = "hello World";
//     string sbustr = str.substr(4, 4); // where to how much
//     cout << sbustr << endl;
//     return 0;
// }

// size
// int main()
// {
//     string str = "hello world";
//     cout << size(str) << endl;
//     cout << str.length() << endl;
//     for (int i = 0; i < str.length(); i++)
//     {
//         cout << str[i];
//     }
//     return 0;
// }

// insert
// int main()
// {
//     string str = "hello";
//     str.insert(2, "lol");
//     cout << str << endl;
//     return 0;
// }
// find
// int main()
// {
//     string str = "hello worlrd";
//     cout << str.find("ello") << endl;
//     return 0;
// }
// /*
// // 2. functions of tring
// int main()
// {
//     /*
//     // 1. append
//     string s1 = "fam", s2 = "ily";
//     s1.append(s2);
//     cout << s1 << endl;
//     // 2. concatination
//     string s3 = "fam", s4 = "ily";
//     string s = s3 + s4;
//     cout << s << endl;
//     */

// /*
//  string str;
//  getline(cin, str);
//  cout << str << endl;
//  // for (int i = 0; i < size(str) - 1; i++)
//  // {
//  //     if (str[i] == 'n')
//  //     {
//  //         cout << i;
//  //     }
//  // }
//  int n;
//  cin >> n;
//  cout << str[n - 1] << endl;
//  */
// /* clear function
// string abc = "ald afdhe loend sdkfej";
// cout << abc << endl;
// abc.clear();
// cout << abc << endl;
// */
// // comparing strings
// /*
// string s1 = "abc", s2 = "xyz";
// // cout << s2.compare(s1) << endl;
// if (s2.compare(s1) == 0)
//     cout << "strings are equal" << endl;
// else
//     cout << "not equal" << endl;
//     */

// // empty
// /*
// string str;
// str = "abc";
// cout << str << endl;
// str.clear();
// if (str.empty())
// {
//     cout << "empty" << endl;
// }
// */
// // erase function
// /*
// string str = "hello world of programmers.";
// str.erase(3, 3); // erase(from where, how many)
// cout << str << endl;
// */
// /*
// // finding string
// string str = "nincompoon";
// cout << str.find("com") << endl;
// return 0;
// }
// * /
// /*
// // 1. basic of string
// int main(){
//     // declaration and input output of string
//     // string str;
//     // cout << "enter str\n";
//     // cin >> str;
//     // cout << str;
//     // string str1(5, 'n');
//     // cout << str1 << endl;

//     // string universtiyName = "IslamicUniversity";
//     // cout << universtiyName << endl;

//     // 3. getline function
//     // string str;
//     // getline(cin, str);
//     // cout << str << endl;
//     // return 0;
// } * /