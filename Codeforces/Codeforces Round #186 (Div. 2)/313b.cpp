#include<bits/stdc++.h>

#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define vii vector<vi>
#define pii pair<int,int>
#define fix(a,b) memset(a,b,sizeof(a))
//lli mod = 1000000007;

using namespace std;

int main()
{
	string s;
	cin >> s;
	int n = s.length();
	int dp[n + 1];
	dp[1] = 0;
	ff(i,2,n)
	{
	    if(s[i - 2] == s[i - 1])
            dp[i] = dp[i - 1] + 1;
        else
            dp[i] = dp[i - 1];
	}
	int q;
    cin >> q;
    ff(i,1,q)
    {
        int l , r;
        cin >> l >> r;
        cout << dp[r] - dp[l];
    }
	return 0;
}
