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
	int t;
	cin >> t;
	while(t--)
	{
		int X[11],g,p,s=0;
		cin >> g>>p;
		ff(i,1,10)	cin >> X[i];
		ff(i,g,10)	s+=X[i];
		if(s<p)
			cout << "1 1\n";
		else if(s%p==0)
			cout << s/p << " " <<s/p<<"\n";
		else
			cout << s/p << " " <<(s+p)/p<<"\n";
	}
	return 0;
}
