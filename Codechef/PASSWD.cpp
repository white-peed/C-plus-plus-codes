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
	string s;
	cin >> s;
	char c;
	bool c1 = false, c2 = false, c3 = false, c4 = false;
	if(s.size() <10 or !(s[0] >= 'a' and s[0] <= 'z') or !(s[s.size()-1] >= 'a' and s[s.size()-1] <= 'z'))
	{
		cout << "NO\n";
		return;
	}
	ff(i,0,s.size()-1)
	{
		c=s[i];
		if(c >= 'a' and c <= 'z')
			c1 = true;
		else if(c >= 'A' and c <= 'Z')
			c2 = true;
		else if(c >= '0' and c <= '9')
			c3 = true;
		else if(c == '@' or c == '#' or c == '%' or c == '&' or c == '?')
			c4 = true;
	}
	cout << (c1 && c2&&c3&&c4?"YES\n":"NO\n");
	return;
}

int main()
{
	int t;
	cin >> t;
	while(t--)	solve();
	return 0;
}
