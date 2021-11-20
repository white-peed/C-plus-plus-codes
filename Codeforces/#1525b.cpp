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
		int n;
		cin >> n;
		int A[n+1];
		ff(i,1,n)	cin >> A[i];
		bool flag = true;
		ff(i,1,n)	if(A[i] != i)	
		{
			flag = false;
			break;
		}	
		if(flag)
			cout << "0\n";
		else
		{
			if(A[1] != 1 and A[n]!=n)
				cout << "2\n";
			else
				cout << "1\n";
		}	
	}
	return 0;
}
