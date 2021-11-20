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

struct A
{
	int st,en;
};

bool fun(A a,A b)
{
	return a.st<b.st;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,k,f;
		cin >> n >> k >> f;
		A B[n];
		ff(i,0,n-1)
			cin >> B[i].st >> B[i].en;
		sort(B,B+n,fun);	
		int a=0,b=0;
		int t = B[0].en-B[0].st;
		ff(i,1,n-1)
			if(B[i].st>B[i-1].en)
				t += B[i].en-B[i].st;
			else
				t += (B[i].en + B[i-1].en - 2*B[i].st);
		cout << (t+k<=f?"YES\n":"NO\n");
	}
	return 0;
}
