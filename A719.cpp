#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++) cin >> a[i];
    if(n == 1) cout << (a[0] == 0 ? "UP" : (a[0] == 15 ? "DOWN" : "-1")) << endl;
    else
    {
        if(a[n-2] < a[n-1] && a[n-1] != 15 || a[n-2] > a[n-1] && a[n-1] == 0) cout << "UP" << endl;
        else cout << "DOWN" << endl;
    }
    return 0;
}
