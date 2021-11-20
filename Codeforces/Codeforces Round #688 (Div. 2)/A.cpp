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
	int t;
	cin >> t;
	while(t--)
	{
		int n, m, j, ans = 0;
		cin >> n >> m;
		int a[101];
		fix(a,0);
		ff(i,1,n)
		{
			cin >> j;
			a[j] = 1;
		}
		ff(i,1,m)
		{
			cin >> j;
			if(a[j] == 1)
				ans++;
		}
		cout << ans << "\n";
	}
	return 0;
}
