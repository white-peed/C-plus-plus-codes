#include<bits/stdc++.h>
#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define vlli vector<lli>
#define pb push_back
#define vii vector<vi>
#define pii pair<int, int>
#define endl "\n"
#define mp make_pair
#define fix(a,b) memset(a,b,sizeof(a))
//lli mod = 1000000007;

using namespace std;

map <int, char>A;

void build()
{
	A[0000] = 'a';
	A[0001] = 'b';
	A[0010] = 'c';
	A[0011] = 'd';
	A[0100] = 'e';
	A[0101] = 'f';
	A[0110] = 'g';
	A[0111] = 'h';
	A[1000] = 'i';
	A[1001] = 'j';
	A[1010] = 'k';
	A[1011] = 'l';
	A[1100] = 'm';
	A[1101] = 'n';
	A[1110] = 'o';
	A[1111] = 'p';
}

int main()
{
	int t;
	build();
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		int B[n];
		ff(i,0,n - 1)	B[i]  = s[i] - '0';
		for(int i = 0;i < n; i += 4)
			cout << A[B[i] * 1000 + B[i + 1] * 100 + B[i + 2] * 10 +B[i + 3]];
		cout << "\n";
	}
	return 0;
}
