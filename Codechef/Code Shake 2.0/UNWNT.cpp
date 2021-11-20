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
	int t;
	cin >> t;
	while(t--)
	{
		lli n;
		cin >> n;
		lli a=0;
		
		if(n>9)
			a+=9;
		else
			a += (n/1);
			
		if(n>99)
			a+=9;
		else
			a += (n/11);
			
		if(n>999)
			a+=9;
		else
			a += (n/111);
			
		if(n>9999)
			a+=9;
		else
			a += (n/1111);
			
		if(n>99999)
			a+=9;
		else
			a += (n/11111);
			
		if(n>999999)
			a+=9;
		else
			a += (n/111111);
			
		if(n>9999999)
			a+=9;
		else
			a += (n/1111111);
			
		if(n>99999999)
			a+=9;
		else
			a += (n/11111111);
			
		if(n>999999999)
			a+=9;
		else
			a += (n/111111111);
			
		cout << n-a << "\n";
	}
	return 0;
}
