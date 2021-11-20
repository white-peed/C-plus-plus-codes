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

int a(int x,int y)
{
	if(x==1)
		return 1 + (y*(y-1))/2;
	return (x-1)*(1+y) + ((x-1)*(x-2))/2 + 1 + (y*(y-1))/2;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int x1,x2,y1,y2;
		cin >> x1 >>y1>>x2>>y2;
		lli s=0;
		ff(i,x1,x2)	
		{
			s += a(i,y1);
			//cout << s << " " << i << " " << y1 << "\n";
		}
		ff(i,y1+1,y2)	
		{
			s += a(x2,i);
			//cout << s << " " << x2 << " " << i << "\n";
		}	
		cout << s << "\n";	
	}
	return 0;
}
