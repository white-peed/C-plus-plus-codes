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
	lli n, m , k;
	cin >> n >> m >> k;
	lli Q[n];
	int S[n];
	ff(i,0,n - 1)	S[i] = 1;
	lli T[n][k];
	ff(i,0,n - 1)
	{
		lli sum = 0;
		ff(j,0,k - 1)	
		{
			cin >> T[i][j];
			sum += T[i][j];
		}
		cin >> Q[i];
		if(sum < m || Q[i] > 10)
			S[i] = 0;
	}
	int ans = 0;
	ff(i,0,n - 1)	ans += S[i];
	cout << ans;
	return 0;
}
