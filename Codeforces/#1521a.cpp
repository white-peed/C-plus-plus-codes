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
	int k;
	cin >> k;
	while(k--)
	{
		lli a, b;
		cin >> a >> b;
		if(b == 1)
			cout << "NO\n";
		else if(b == 2)
			cout << "YES\n" << a << " " << a * 3 << " " << a * 4 << "\n";
		else 
			cout << "YES\n" << a << " " << a * (b - 1) << " " << a * b << "\n";
	}
	return 0;
}
