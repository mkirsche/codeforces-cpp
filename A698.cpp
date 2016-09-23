#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++) cin >> a[i];
    int dp[n+1][3];
    for(int i = 0; i<=n; i++)
        for(int j = 0; j<3; j++)
            dp[i][j] = 0;
    for(int i = 0; i<n; i++)
        for(int j = 0; j<3; j++)
            for(int k = 0; k<3; k++)
            {
                if(k != 0 && j == k) continue;
                if(k == 1 && (a[i]&1) == 0) continue;
                if(k == 2 && (a[i]&2) == 0) continue;
                dp[i+1][k] = max(dp[i+1][k], dp[i][j] + (k>0));
            }
    int res = n - max(dp[n][0], max(dp[n][1], dp[n][2]));
    cout << res << endl;
    return 0;
}
