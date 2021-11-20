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

int solve(string s)
{
	int dp[s.size()];
	dp[0] = 1;
	ff(i,1,s.size()-1)
		if((s[i] < '7' and s[i-1] < '3'))
			dp[i] = dp[i-1] + (i==1 ? 1 : dp[i-2]);
		else
			dp[i] = dp[i-1] ;
	return dp[s.size() - 1];
}

int main()
{
	string s;
	while(cin >> s)
	{
		if(s == "0")
			break;
		cout << solve(s) << "\n";
	}
	return 0;
}
