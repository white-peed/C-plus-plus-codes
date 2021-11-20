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
	string s;
	cin >> s;
	int a = 0, b = 0, n = s.size();
	ff(i,0,n-1)
		if(s[i] == 'A')
		{
			a = i;
			break;
		}
	fb(i,n-1,0)
		if(s[i] == 'Z')
		{
			b = i;
			break;
		}
	cout << b - a + 1;		
	return 0;
}
