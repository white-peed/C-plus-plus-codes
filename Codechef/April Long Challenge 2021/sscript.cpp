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
		int n, k, c = 0, cm = 0;
		string s;
		cin >> n >> k;
		cin >> s;
		ff(i,0,s.size() - 1)
			if(s[i] == '*')
				c++;
			else
			{
				cm = max(cm, c);
				c = 0;
			}
		if(cm >= k)
			cout << "YES\n";
		else
			cout << "NO\n";	
	}
	return 0;
}
