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
	lli n;
	cin >> n;
	lli a,b,c,m= 10e18;
	ff(i,0,60)
	{
		b=i;
		a=(n/((lli)pow(2,b)));
		c=n%((lli)pow(2,b));
		m=min(m,a+b+c);
	}
	cout << m;
	return 0;
}
