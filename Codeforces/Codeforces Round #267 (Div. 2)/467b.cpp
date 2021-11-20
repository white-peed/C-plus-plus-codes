#include<bits/stdc++.h>

#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define vii vector<vi>
#define pii pair<int,int>
#define fix(a,b) memset(a,b,sizeof(a))
//lli mod = 1000000007;

using namespace std;

int no_bits(int n)
{
	int i = 0;
	while(n != 0)
	{
		if(n%2)
			i++;
		n /= 2;
	}
	return i;
}

int main()
{
	int n, m, k, fed, l = 0;
	cin >> n >> m >> k;
	int arr[m + 1];
	ff(i, 1, m)
	{
		cin >> arr[i];
	}
	cin >> fed;
	ff(i,1,m)
	{
		int a = arr[i] ^ fed;
		if(no_bits(a) <= k)
			l++;
	}
	cout << l;
	return 0;
}
