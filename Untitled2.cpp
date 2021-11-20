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

void Is_subset(vi v, int b)
{
	int n = v.size();
	int M[n + 1][b + 1] = { 0 };
	ff(i,0,b)	M[0][i] = 0;
	ff(i,0,n - 1)	M[1][v[i]] = 1;
	ff(i,0,b)	M[v[0]][i] = 1;
	ff(i,2,n)
		ff(j,0,b)
		{
			if(j >= v[i - 1])
				if(M[i - 1][j] == 1 || M[i - 1][j - v[i - 1]] == 1)
					M[i][j] = 1;
		}
	ff(i,0,n)
	{
		ff(j,0,b)
			cout << M[i][j] << " ";
		cout << "\n";
	}
	return;
}

int main()
{
	vi v;
	int n, b;
	cin >> n;
	ff(i,1,n)
	{
		int a;
		cin >> a;
		v.pb(a);
	}
	cin >> b;
	Is_subset(v,b);
	return 0;
}
/*
5
2 4 6 8 10
17
*/
