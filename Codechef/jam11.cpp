#include<bits/stdc++.h>

#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define vii vector<vi>
#define pii pair<int,int>

using namespace std;

lli dp[100001];
lli mod = 1000000007;

void solve()
{
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	ff(i,4,100000)
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
}

int main()
{
	memset(dp, 0, sizeof(dp));
	lli t;
	cin >> t;
	solve();
	while(t--)
	{
		int n;
		cin >> n;
		cout<< dp[n] % mod << "\n";
	}
	return 0;
}
