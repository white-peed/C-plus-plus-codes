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

void solve()
{
	int n, s = 0, a=0,b=0,c,s1;
	cin >> n;
	int A[n];
	ff(i,0,n-1)
	{
		cin >> A[i];
		s += A[i];
		if(A[i] == 2)
			b++;
		else
			a++;
	}
	if(s%2 == 1)
	{
		cout << "NO\n";
		return;
	}
	s1=s/2;
	
	if(s1 < (2*b))
	{
		if(a == 0 && s1%2==1)
		{
			cout << "NO\n";
			return;
		}
		else 
		{
			cout << "YES\n";
			return;
		}
	}
	else
	{
		cout << "YES\n";
		return;
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)	solve();
	return 0;
}
