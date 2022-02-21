#include<bits/stdc++.h>
#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define vlli vector<lli>
#define vb vector<bool>
#define vbb vector<vb>
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
    int n, m;
    cin >> n >> m;
    vi vals(n+1);
    ff(i,1,n)   cin >> vals[i];
    vector<vector<bool>>    dp(n+1, vector<bool>(m+1, false));
    dp[0][0] = 1;
    ff(i,1,n)
    {
        dp[i][0] = 1;
        ff(j,1,m)
        {
            dp[i][j] = dp[i-1][j];
            if(j>=vals[i])  dp[i][j] = dp[i][j] or dp[i-1][j-vals[i]];
        }
    }
    cout << (dp[n][m] ? "Yes\n" : "No\n");
    return;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
	int t = 1;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
