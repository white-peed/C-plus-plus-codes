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
	lli n, t, ans = 0, tile = 1e5;
	int m;
	
	cin >> n >> m;
	if(m == 0)
	{
		cout << 1;
		return 0;
	}
	
	vlli A;
	ff(i,1,m)
	{
		cin >> t;
		A.pb(t);
	}
	
	sort(A.begin(), A.end());
	
	if(A[0] != 1)
		tile = A[0] - 1;
	
	ff(i, 1, m - 1)
		if((A[i] - A[i - 1]) != 1)
			tile = min(tile, A[i] - A[i - 1] - 1);
	
	if(A[m - 1] != n)
		tile = min(tile, n - A[m - 1]);
	
	if(A[0] != 1)
		if((A[0] - 1) % tile == 0)
			ans += (A[0] - 1) / tile;
		else
			ans += ((A[0] - 1) / tile) + 1; 
	
	ff(i, 1, m - 1)
		if((A[i] - A[i - 1] - 1) != 0)
			if((A[i] - A[i - 1] - 1) % tile == 0)
				ans += (A[i] - A[i - 1] - 1) / tile;
			else
				ans += ((A[i] - A[i - 1] - 1) / tile) + 1; 
	
	if(A[m - 1] != n)
		if((n - A[m - 1]) % tile == 0)	
			ans += (n - A[m - 1]) / tile;
		else
			ans += ((n - A[m - 1]) / tile) + 1;
		
	cout << ans;
	return 0;
}
