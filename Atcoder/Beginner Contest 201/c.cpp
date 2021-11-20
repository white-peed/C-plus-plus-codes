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
	int a=0,b=0;
	ff(i,0,9)
		if(s[i]=='o')
			a++;
		else if(s[i]=='?')
			b++;
	if(a > 4 or a+b<4)
		cout << 0;
	else if(a == 4)
		cout << 24;
	else if(a==3)
		cout << 36 + b*24;
	else if(a == 2)
	else if(a == 1)
	{
		if(b==1)
			cout << 
		else
			cout << 
	}
	else
	return 0;
}
