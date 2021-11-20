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
#define iter(i,a) for( typeof(a.begin()) i=a.begin();i!=a.end();i++)
//lli mod = 1000000007;

using namespace std;

void solve()
{
	lli n;
	cin >> n;
	lli A[n];
	lli dp[n];
	ff(i,0,n-1)	cin >> A[i];
	fb(i,n-1,0)
	{
		dp[i] = A[i];
		if(i + A[i] < n)
			dp[i] += dp[i + A[i]]; 
	}
	cout << *max_element(dp,dp+n) << "\n";
	return;
}

int main()
{
	int t;
	cin >> t;
	while(t--)	solve();
	return 0;
}
