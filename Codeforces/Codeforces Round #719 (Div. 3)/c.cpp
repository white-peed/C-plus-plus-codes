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

int A[100][100];

void start()
{
	A[0][0] = 1;
	
}

void solve()
{
	int n;
	cin >> n;
	if(n == 2)
	{
		cout << -1 << "\n";
		return;
	}
	ff(i,0,n-1)
	{
		ff(j,0,n-1)
			cout << A[i][j] << " ";
		cout << "\n";
	}
	return;
}

int main()
{
	int t;
	cin >> t;
	start();
	while(t--)	solve();
	return 0;
}
