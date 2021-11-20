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
	lli t;
	cin >> t;
	while(t--)
	{
		int l, a = 0;
		string s;
		cin >> l;
		cin >> s;
		bool ans = false;
		ff(i,0,l-1)	
		{
			if(s[i] == '1')
				a++;
			else
				a--;
			if(a >= 0)
				ans = true;	
		}
		cout << ( ans ? "YES\n" : "NO\n" );	
	}
	return 0;
}
