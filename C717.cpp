#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    long long res = 0;
    for(int i = 0; i<n; i++) res = (res + (long long)a[i] * a[n-1-i])%10007;
    cout << res << endl;
    return 0;
}
