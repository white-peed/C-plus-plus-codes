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
	char A[n+1][m+1];
	ff(i,1,n)	ff(j,1,m)	
	{
		cin >> A[i][j];
		if(A[i][j] == '.')
			A[i][j] = ((i+j)%2==0?'B':'W');
	}
	ff(i,1,n)		
	{
		ff(j,1,m)	
			cout << A[i][j];
		cout << "\n";
	}
	return 0;
}
