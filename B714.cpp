#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    vector<int> v;
    for(int i = 0; i<n; i++)
    {
        if(i == 0 || i > 0 && a[i] != a[i-1]) v.push_back(a[i]);
    }
    cout << (v.size() < 3 || (v.size() == 3 && v[2] - v[1] == v[1] - v[0]) ? "YES" : "NO") << endl;
    return 0;
}
