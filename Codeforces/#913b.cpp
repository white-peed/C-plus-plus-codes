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
	int n;
	cin >> n;
	vi A[n+1];
	int a;
	ff(i,2,n)
	{
		cin >> a;
		A[a].pb(i);
	}
	ff(i,1,n)
		if(A[i].size() == 1 or A[i].size() == 2)
		{
			cout << "No";
			return 0;
		}
		else if(A[i].size() >= 3)
		{
			int c = 0;
			ff(j,0,A[i].size()-1)
				if(A[A[i][j]].size() == 0)
					c++;
			if(c>= 3)
				continue;
			else
			{
				cout << "No";
				return 0;
			}
		}
	cout << "Yes\n";
	return 0;
}
