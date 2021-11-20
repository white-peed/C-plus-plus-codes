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
	int n, m, a, b;
	cin >> n >> m;
	vi A;
	A.assign(n + 1, 3);
	vi B[n + 1];
	ff(i,1,m)
	{
		cin >> a >> b;
		B[a].pb(b);
		B[b].pb(a);
	}
	ff(i,1,n)
		if(B[i].size() >= 3)
		{
			cout << "0";
			return 0;
		}
	ff(i,1,n)
		if(B[i].size() == 2)
			A[i] = 1;
		else if(B[i].size() == 1)
			A[i] = 2;
	lli ans = 1;
	ff(i,1,n)
		ans *= A[i];
	cout << ans;
	return 0;
}
