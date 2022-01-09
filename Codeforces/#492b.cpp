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
	int n;
	lli l;
	cin >> n >> l;
	lli A[n];
	ff(i,0,n-1)	cin >> A[i];	
	sort(A,A+n);
	lli m = 0;
	ff(i,1,n-1)
		m = max(m,A[i] - A[i-1]);
	m = max(2*(A[0]-0),m);
	m = max(m, 2*(l - A[n-1]));
	cout <<fixed << setprecision(16) << m/2.00; 
	return 0;
}
