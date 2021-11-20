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
		lli n;
		cin >> n;
		n%=7;
		if(n==0)
			cout << "Sunday\n";
		else if(n==1)
			cout << "Monday\n";	
		else if(n==2)
			cout << "Tuesday\n";
		else if(n==3)
			cout << "Wednesday\n";
		else if(n==4)
			cout << "Thrusday\n";
		else if(n==5)
			cout << "Friday\n";
		else
			cout << "Saturday\n";
	}
	return 0;
}
