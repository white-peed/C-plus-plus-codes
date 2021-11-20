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

bool check(string s)
{
	if(isupper(s[0]))
	{	
		ff(i,0,s.size()-1)
			if(s[i]<'N')
				return false;
	}
	else
	{
		ff(i,0,s.size()-1)
			if(s[i]>'m' or s[i]<'a')
				return false;
	}	
	return true;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		bool f = true;
		string s;
		int n;
		cin >> n;
		ff(i,1,n)
		{
			cin >> s;
			f = f & check(s);
		}
		cout << (f?"YES\n":"NO\n");
	}
	return 0;
}
