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
	int a,b,c,n = 6;
	int A[n];
	cin >> a >> b >> c;
	A[0] = a*b*c;
	A[1] = (a+b)*c;
	A[2] = a+b*c;
	A[3] = a*b+c;
	A[4] = a+b+c;
	A[5] = a*(b+c);
	cout << *max_element(A,A+n);
	return 0;
}
