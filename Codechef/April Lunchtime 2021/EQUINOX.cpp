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
		int n;
		lli a, b, sa = 0;
		cin >> n >> a >> b;
		string s;
		ff(i,1,n)
		{
			cin >> s;
			if(s[0] == 'E' || s[0] == 'Q' || s[0] == 'U' || s[0] == 'I' || s[0] == 'N' || s[0] == 'O' || s[0] == 'X')
				sa += a;
			else
				sa -= b;
		}	
		cout << (sa == 0 ? "DRAW\n" : (sa > 0 ? "SARTHAK\n" : "ANURADHA\n"));
	}
	return 0;
}
