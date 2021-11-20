#include<bits/stdc++.h>

#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define vii vector<vi>
#define pii pair<int,int>
#define fix(a,b) memset(a,b,sizeof(a))
using namespace std;

lli dp[100000000001];
lli mod = 1000000007;

void solve()
{
	fix(dp,0);
	dp[1] = 1;
	dp[2] = 2;
	ff(i,3,100000000000)
		dp[i] = dp[i - 1] + dp[i - 2];
}

int main()
{
	lli t;
	cin >> t;
	solve();
	while(t--)
	{
		lli n;
		cin >> n;
		cout<< dp[n] % mod << "\n";
	}
	return 0;
}
