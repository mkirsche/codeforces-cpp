#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> count;
    for(int i = 0; i<n; i++)
    {
        string s;
        cin >> s;
        char c = s[0];
        if(c == '?')
        {
            string query;
            long long q;
            cin >> q;
            stringstream ss;
            ss << q;
            query = ss.str();
            int res = count[query];
            cout << res << endl;
        }
        else
        {
            string x;
            cin >> x;
            for(int i = 0; i<x.length(); i++)
            {
                int v = x[i] - '0';
                if(v&1) x[i] = '1';
                else x[i] = '0';
            }
            int first = x.length()-1;
            for(int i = x.length()-1; i>=0; i--) if(x[i] == '1') first = i;
            string y = x.substr(first);
            if(c == '+') count[y]++;
            else count[y]--;
        }
        
    }
    return 0;
}
