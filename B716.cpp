#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int good = 0;
    int n = s.length();
    for(int i = 0; i<n-25 && !good; i++)
    {
        int count[26];
        for(int j = 0; j<26; j++) count[j] = 0;
        for(int j = 0; j<26; j++) if(s[i+j] != '?') count[s[i+j]-'A']++;
        int gWindow = 1;
        for(int j = 0; j<26; j++) gWindow &= count[j] < 2;
        int ptr = 0;
        if(gWindow)
        {
            for(int j = 0; j<26; j++)
            {
                if(s[i+j] == '?')
                {
                    while(count[ptr]) ptr++;
                    count[ptr]++;
                    s[i+j] = (char)('A' + ptr);
                }
            }
        }
        good |= gWindow;
    }
    for(int i = 0; i<n; i++) if(s[i] == '?') s[i] = 'A';
    cout << (good ? s : "-1") << endl;
}

