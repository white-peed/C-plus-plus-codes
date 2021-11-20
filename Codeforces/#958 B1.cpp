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
	int n;
	cin >> n;
	vi A[n+1];
	int count = 0;
	int u, v;
	ff(i,1,n-1)
	{
		cin >> u >> v;
		A[u].pb(v);
		A[v].pb(u);
	}
	ff(i,1,n)
		if(A[i].size() == 1)
			count++;
	cout << count;
	return 0;
}
