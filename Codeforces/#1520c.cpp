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

void solve(int n)
{
	if(n == 1)
	{
		cout << "1\n";
		return;
	}
	else if(n == 2)
	{
		cout << "-1\n";
		return;
	}
	else
	{
		int a = 1;
		ff(i,1,n)
		{
			ff(j,1,n)
			{
				cout << a << " ";
				a += 2;
				if(a > n * n)
					a = 2;
			}
			cout << "\n";
		}
		return;
	}
}

int main()
{
	int k;
	cin >> k;
	while(k--)
	{
		int n;
		cin >> n;
		solve(n);
	}
	return 0;
}
