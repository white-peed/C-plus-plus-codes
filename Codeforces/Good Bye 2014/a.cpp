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
	int n, t;
	cin >> n >> t;
	int A[n];
	ff(i,1,n-1)	cin >> A[i];
	bool ans = false;
	for(int i = 1; i <=n; )
	{
		if(i == t)
			ans = true;
		i += A[i];
	}
	cout << (ans ? "YES" : "NO" );
	return 0;
}
