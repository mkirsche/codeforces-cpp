#include <iostream>

using namespace std;

int main()
{
    long long a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;
    long long inter = max(0LL, min(b, d) - max(a, c) + 1);
    if(k >= a && k <= b && k >= c && k <= d) inter--;
    cout << inter << endl;
}
