// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// // string to integer && integer to string
// void subString();
// void sizeOfString();
// void insertString();
// void findString();
// void apndConcat();

// int main()
// {
//     // string str = "234";
//     // int n = stoi(str);
//     // cout << n << endl;
//     // str = to_string(n);
//     // cout << str << endl;
//     subString();
//     sizeOfString();
//     insertString();
//     findString();
//     apndConcat();
//     return 0;
// }
// void apndConcat()
// {
//     string s1 = "Hello";
//     string s2 = "world";
//     cout << s1.append(s2) << endl;
//     cout << s1 << "|" << s2 << endl;
//     string s3 = "Hello";
//     cout << s3 + s2 << endl;
//     cout << s3 << "|" << s2 << endl;
// }
// void toString()
// {
//     string str = "2342";
//     int n = stoi(str);
//     cout << n << endl;
//     str = to_string(n);
//     cout << str << endl;
// }
// void subString()
// {
//     string str = "hello World";
//     string substr = str.substr(2, 4);
//     cout << substr << endl;
// }
// void sizeOfString()
// {
//     string str = "Hello world";
//     cout << size(str) << endl;
//     cout << str.length() << endl;
//     for (int i = 0; i < str.length(); i++)
//     {
//         cout << str[i];
//     }
// }
// void insertString()
// {
//     string str = "Hello";
//     str.insert(2, "lol");
//     cout << str << endl;
// }
// void findString()
// {
//     string str = "Hello world";
//     cout << str.find("ello") << endl;
// }
/*
// 2. sorting a string
int main()
{
    string s1 = "ald eia dheo cje";
    sort(s1.begin(), s1.end());
    cout << s1 << endl;
    return 0;
}
*/
/*
// 1 basic function
int main()
{
    // declaration and input output of string;
    // string str;
    // cout << "ener str\n";
    // cin >> str;
    // cout << str;
    // string str1(5, 'n');
    // cout << str1 << endl;
    string univerSityName = "Islamic University";
    cout << univerSityName << endl;
    // 3 getline function
    string str;
    getline(cin, str);
    cout << str << endl;
    return 0;
}
*/

// #include <iostream>
// #include<string>
// #include<algorithm>
// using namespace std;

// int main(){
//     string s1 = "Neo is stupid";
//     sort(s1.begin(),s1.end());
//     // for()
//     cout<<s1<<endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;

// // string to integer a number

// int main(){
//     string str = "123";
//     int n = stoi(str);
//     cout<<n<<endl;
//     // integer to string
//     string mystring;
//     mystring = to_string(n);
//     cout<<mystring<<endl;
//     return 0;
// }

// substring
// #include <iostream>
// using namespace std;

// int main(){
//     string str = "hello world";
//     string substr = str.substr(4,4);
//     cout<<substr<<endl;
//     return 0;
// }



// size of the string

// #include <iostream>
// using namespace std;

// int main(){
//     string str = "hello world";
//     cout<<size(str)<<endl;
//     for(int i=0;i<str.length();i++){
//         cout<<str[i];
//     }

//     return 0;
// }



// inserting
// #include <iostream>
// using namespace std;

// int main(){
//     string str =  "hello";
//     str.insert(2,"lol");
//     cout<<str<<endl;
//     return 0;
// }


//find
// #include <iostream>
// using namespace std;

// int main(){
//     string str =  "hello world";
//     cout<<str.find("ello")<<endl;

//     return 0;
// }

// functions of string

// #include <iostream>
// using namespace std;

// int main(){
//     string s1 = "fam",s2="ily";
//     s1.append(s2);
//     cout<<s1<<endl;
//     // concatination
//     string s3="fam",s4="ily";
//     string s=s3+s4;
//     cout<<s<<endl;
//     cout<<s3+s4<<endl;
//     return 0;
// }


// string getline function

// #include <iostream>
// using namespace std;

// int main(){
//     string str;
//     cout<<"Enter the string: \n";
//     getline(cin,str);
//     cout<<str<<endl;
//     cout<<"enter n;\n";
//     int n;
//     cin>>n;
//     cout<<str[n-1]<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    cout<<str<<endl;
    cout<<"Now cleared"<<endl;
    str.clear();
    cout<<str<<endl;
    return 0;
}