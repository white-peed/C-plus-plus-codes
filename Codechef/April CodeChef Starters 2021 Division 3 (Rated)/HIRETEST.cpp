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

bool is_pass(string s, int x, int y)
{
	int sc = 0, sp = 0;
	ff(i,0,s.size() - 1)
		if(s[i] == 'P')
			sp++;
		else if(s[i] == 'F')
			sc++;
	if(sc >= x)
		return true;
	if(sc == (x-1) && sp >= y)
		return true;
	return false;
}

int main()
{
	lli t;
	cin >> t;
	while(t--)
	{
		int n, m, x, y;
		string s, a = "";
		cin >> n >> m;
		cin >> x >> y;
		ff(i,1,n)
		{
			cin >> s;
			if(is_pass(s, x, y))
				a.pb('1');
			else
				a.pb('0');
		}	
		cout << a << "\n";	
	}
	return 0;
}
