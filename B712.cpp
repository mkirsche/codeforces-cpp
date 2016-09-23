#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int a = 0, b = 0;
    for(int i = 0; i<n; i++)
    {
        char c = s[i];
        if(c == 'L') a++;
        else if(c == 'R') a--;
        else if(c == 'U') b++;
        else b--;
    }
    if(n%2 != 0) cout << -1 << endl;
    else cout << (abs(a)+abs(b))/2 << endl;
}
