

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "alei ddfoie akejoiia";
    int count[26];
    for (int i = 0; i < 26; i++)
    {
        count[i] = 0;
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
    cout << maxF << endl;
    cout << ans << endl;
    return 0;
}

/*
#include <iostream>
using namespace std;

int main()
{
    int ans;
    ans = 'a';
    cout << ans;
    return 0;
}
*/