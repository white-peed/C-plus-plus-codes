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
	int n,a, A[5];
	fix(A,0);
	cin >> n;
	ff(i,1,n)
	{
		cin >> a;
		A[a]++;
	}
	int ans = A[4] + A[3];
	if(A[1] > A[3])
		A[1] -= A[3];
	else 
		A[1] = 0;
	ans += (A[2]/2);
	A[2] %= 2;
	if(A[2])
	{
		ans += A[2];
		if(A[1])
			A[1] -= 2;
	}
	if(A[1] < 0)
		A[1] = 0;
	ans += (A[1]+3)/4;
	cout << ans;
	return 0;
}
