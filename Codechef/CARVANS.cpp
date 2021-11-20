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
		int A[n],B[n];
		ff(i,0,n-1)	cin >> A[i];
		int a = 0;
		ff(i,0,n-1)	
			B[i] = A[i];
		ff(i,1,n-1)
			if(B[i] > B[i-1])
				B[i] = B[i-1];
		ff(i,0,n-1)
			if(A[i] == B[i])
				a++;
		cout << a << "\n"; 		
	}
	return 0;
}
