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

string s;
int n;

void pout(int a, int b)
{
	ff(i,0,n)	cout << "  ";
	ff(i,a,b)	cout << s[i];
	cout << "\n";
}

void fun(int a)
{
	if(s[a+1] != '/')
	{
		pout(a,a+2);
		fun(a+3);
		n++;
	}
	else
	{
		pout(a,a+3);
		n--;
	}
}

int main()
{
	cin >> s;
	n= 0;
	fun(0);
	return 0;
}
