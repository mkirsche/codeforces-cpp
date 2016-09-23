#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n, c;
    cin >> n >> c;
    int a[n];
    for(int i = 0; i<n; i++) cin >> a[i];
    int res = 0;
    int last = 0;
    for(int i = 0; i<n; i++)
    {
        if(a[i] - last > c) res = 0;
        res++;
        last = a[i];
    }    
    cout << res << endl;
}
