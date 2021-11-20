#include<bits/stdc++.h>
#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define pb push_back
#define vii vector<vi>
#define pii pair<int,int>
#define endl "\n"
#define mp make_pair
#define fix(a,b) memset(a,b,sizeof(a))
//lli mod = 1000000007;

using namespace std;

int factors(int n)
{
	int i = 0;
	ff(j,1,n)
		if(n % j == 0)		//TLE find better algo for factor finding
			i++;
	return i;
}

int main()
{
	int n;
	cin >> n;
	lli sum = 0;
	ff(i,1,n-1)		sum += factors(n - i);
	cout << sum;
	return 0;
}
