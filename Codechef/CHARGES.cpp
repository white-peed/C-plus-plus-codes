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
		int n,k,b,s=0;
		string a;
		cin >> n >> k;
		cin >> a;
		ff(i,1,n-1)
			if((a[i]=='1' and a[i-1]=='0') or (a[i]=='0' and a[i-1]=='1'))	
				s++;
			else
				s+=2;
		while(k--)
		{
			cin >> b;
			if(b==1)
			{
				if(a[0]==a[1])
					s--;
				else
					s++;
					
				if(a[0]=='1')
					a[0]='0';
				else
					a[0]='1';
			}
			else if(b==n)
			{
				if(a[n-1]==a[n-2])
					s--;
				else
					s++;
					
				if(a[n-1]=='1')
					a[n-1]='0';
				else
					a[n-1]='1';
			}
			else
			{
				if(a[b-1]==a[b-2])
					s--;
				else
					s++;
				
				if(a[b-1]==a[b])
					s--;
				else
					s++;
				
				if(a[b-1]=='1')
					a[b-1]='0';
				else
					a[b-1]='1';
			}
			cout << s << "\n";
		}
	}
	return 0;
}
