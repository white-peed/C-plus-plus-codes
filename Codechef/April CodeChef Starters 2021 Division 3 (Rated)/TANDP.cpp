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

int mov_p(int x, int y, int n, int m)
{
	return max(n-x,m-y);
}

int mov_t(int x, int y, int n, int m)
{
	return (n - x) + (m - y);
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int x, y, m, n, a, b;
		cin >> n >> m;
		cin >> x >> y;
		cin >> a >> b;
		if(mov_t(x,y,n,m) <= mov_p(a,b,n,m))
			cout << "YES\n";
		else
			cout << "NO\n";		
	}
	return 0;
}
