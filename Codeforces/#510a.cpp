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
	int n, m;
	cin >> n >> m;
	char A[n][m];
	ff(i,0,n-1)
		ff(j,0,m-1)
			A[i][j] = '#';
	ff(i,1,n)
		if(i%2 == 0)
		{
			if(i%4==0)
				ff(j,1,m-1)
					A[i-1][j] = '.';
			else
				ff(j,0,m-2)
					A[i-1][j] = '.';
		}
	ff(i,0,n-1)
	{
		ff(j,0,m-1)
			cout << A[i][j];
		cout << "\n";
	}
	return 0;
}
