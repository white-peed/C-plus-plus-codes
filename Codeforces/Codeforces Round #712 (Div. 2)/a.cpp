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
//lli mod = 1000000007;

using namespace std;

int main()
{
	lli t;
	cin >> t;
	while(t--)
	{
		string s;
		int na = 0;
		cin >> s;
		bool f = true;
		ff(i,0,s.size() - 1)
			if(s[i] != 'a')
			{
				f = false;
				na = i;
			}
		if(f)
		{
			cout << "NO\n";
			continue;
		}
		s.insert(s.size() - na - 1, "a");
		cout << "YES\n" << s << "\n";
	}
	return 0;
}
