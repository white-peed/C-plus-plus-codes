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
	int a[26];
	fix(a,0);
	string s;
	cin >> s;
	ff(i,0,s.size()-1)	a[(int)(s[i]-'a')] = 1;
	int b=0;
	ff(i,0,25)	b+=a[i];
	cout << (b%2==1?"IGNORE HIM!":"CHAT WITH HER!");
	return 0;
}