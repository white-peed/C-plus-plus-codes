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
	int a, b, s = 0;
	vi A;
	cin >> a >> b;
	if(a >= b)	
	{
		ff(i,1,a)
			A.pb(i);
		ff(i,1,b-1)
			A.pb(i*(-1));
		ff(i,b,a)	
			s += i;
		A.pb(s*(-1));
	}
	else
	{
		ff(i,1,b)
			A.pb(i*(-1));
		ff(i,1,a-1)
			A.pb(i);
		ff(i,a,b)	
			s += i;
		A.pb(s);	
	}
	iter(i,A)
		cout << *i << " ";
	return 0;
}
