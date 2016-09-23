#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++) cin >> a[i];
    int res = 0;
    for(int i = 0; i<n; i++)
    {
        int j = i;
        while(j < n-1 && a[j+1] > a[j]) j++;
        res = max(res, j - i + 1);
        i = j;
    }
    cout << res << endl;
    return 0;
}
