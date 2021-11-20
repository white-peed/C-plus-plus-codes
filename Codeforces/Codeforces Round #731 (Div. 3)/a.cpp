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
		int xa, ya, xb, yb, xf, yf;
		cin >> xa >> ya;
		cin >> xb >> yb;
		cin >> xf >> yf;
		if(xa == xb and xb == xf)
		{
			if((ya > yf and yf > yb) or (yb > yf and yf > ya))
				cout << abs(ya - yb) + 2 << "\n";
			else
				cout << abs(ya - yb) << "\n";
		}
		else if(ya == yb and yb == yf)
		{
			if((xa > xf and xf > xb) or (xb > xf and xf > xa))
				cout << abs(xa - xb) + 2 << "\n";
			else
				cout << abs(xa - xb) << "\n";
		}
		else
			cout << abs(xa - xb) + abs(ya - yb) << "\n"; 
	}
	return 0;
}
