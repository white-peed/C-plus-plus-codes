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
	lli a,b,c,d;
	cin >> a >> b >> c >> d;
	if(a==b and b==c && c==d)
		cout << 3;
	else if((a==b and b==c) || (a==b and b==d) || (a==d and d==c) || (d==b and b==c) || (a==b and d==c) || (a==c and b==d) || (a==d and b==c))
		cout << 2;
	else if(a==b or b==c or a==c or b==d or a==d or d==c)
		cout << 1;
	else
		cout << 0;
	return 0;
}
