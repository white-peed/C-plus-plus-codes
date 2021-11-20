#include<bits/stdc++.h>
#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define vlli vector<lli>
#define pb push_back
#define vii vector<vi>
#define pii pair<int,int>
#define endl "\n"
#define mp make_pair
#define fix(a,b) memset(a,b,sizeof(a))
//lli mod = 1000000007;

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		unsigned long long x, y, n, i, ans = 0;
		int a, a_;
		cin >> x >> y;
		a = y % 10;
		a_ = a;
		n = x / y;
		for(i = 1; i <= n; i++)
		{
			ans += a_ % 10;
			a_ += a;
		}
		cout << ans << "\n";		
	}
	return 0;
}
