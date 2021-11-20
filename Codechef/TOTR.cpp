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
	string s;
	cin >> t >> s;
	while(t--)
	{
		string t, u = "";
		cin >> t;
		ff(i,0,t.size()-1)
			if(isalpha(t[i]))
			{
				if(isupper(t[i]))
					u.pb(toupper(s[t[i] - 'A']));
				else
					u.pb(s[t[i]-'a']);
			}
			else if(t[i]=='_')
				u.pb(' ');
			else
				u.pb(t[i]);
			cout << u << "\n";
	}
	return 0;
}
