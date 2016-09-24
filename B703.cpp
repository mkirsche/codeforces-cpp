#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i<n; i++) cin >> a[i];
    int cap[n] = {0};
    for(int i = 0; i<k; i++)
    {
        int x;
        cin >> x;
        cap[x-1] = 1;
    }
    int sum = 0;
    for(int i = 0; i<n; i++) sum += a[i];
    long long res = 0, res2 = 0;
    long long capsum = 0;
    for(int i = 0; i<n; i++)
    {
        if(i == n-1 && cap[0]) capsum -= a[0];
        res += (long long)a[i] * a[(i+1)%n];
        if(cap[i])
        {
            res += (long long)a[i] * (sum - a[i] - a[(i+1)%n] - a[(i+n-1)%n] - capsum);
        }
        if(i > 0 && cap[i-1]) capsum += a[i-1];
    }
    cout << res << endl;
    return 0;
}
