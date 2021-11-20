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
//lli mod = 1000000007;

using namespace std;

int main()
{
	lli t;
	cin >> t;
	while(t--)
	{
		string str;
		int count = 0;
		cin >> str;
		str.pb('0');
		ff(i, 0, str.length() - 2)
			if(str[i] == '1' && str[i + 1] == '0')
				count++;
		cout << count;
	}
	return 0;
}
