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
	lli a,b,c;
	cin >> a >> b >> c;
	if(a==b)
		cout << "=";
	else if(a==0)
		cout << (b>0?"<":(c%2==0?"<":">"));
	else if(b==0)
		cout << (a>0?">":(c%2==0?">":"<"));
	else if(abs(a) == abs(b))
		cout << (c%2==0?"=":(a>0?">":"<"));
	else if(a>0 and b>0)
		cout << (a>b?">":"<");
	else if(a<0 and b<0)
		cout << (a>b?(c%2==0?"<":">"):(c%2==0?">":"<"));
	else if(a>0 and b<0)
		cout << (a>abs(b)?">":(c%2==0?"<":">"));
	else
		cout << (b>abs(a)?"<":(c%2==0?">":"<"));
	return 0;
}
