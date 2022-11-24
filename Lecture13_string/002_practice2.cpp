#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "ffe ale cjee alfdj cnehw";
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
    cout << maxF << endl
         << ans << endl;
    return 0;
}