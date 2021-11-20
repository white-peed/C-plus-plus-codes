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

int main()
{
	int n, q, t, u, v;
	cin >> n >> q;
	int A[n+1][n+1];
	fix(A, 0);
	ff(i,1,q)
	{
		cin >> t >> u >> v;
		if(t == 0)
		{
			A[u][v] = 1;
			A[v][u] = 1;
		}
		else
			cout << A[u][v] << "\n";
	}
	return 0;
}
