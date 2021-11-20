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
		cin >> s;
		if(s.size() < 5)
		{
			cout << s << "\n";
			continue;
		}
		ff(i,0,s.size() - 1)
			if(s[i] == 'p' && s[i + 1] == 'a' && s[i + 2] == 'r' && s[i + 3] == 't' && s[i + 4] == 'y')
				s[i + 2] = 'w', s[i + 3] = 'r', s[i + 4] = 'i';
		cout << s << "\n";	
	}
	return 0;
}
