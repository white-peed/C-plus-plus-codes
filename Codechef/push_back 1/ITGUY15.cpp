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
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		ff(i,0,s.length() - 3)
			if(s[i] == 'a' && s[i + 1] == 'b' && s[i + 3] == 'c')
			{
				s.erase(i,3);
				i = -1;
			}	
		cout << s << "\n";	
	}
	return 0;
}
