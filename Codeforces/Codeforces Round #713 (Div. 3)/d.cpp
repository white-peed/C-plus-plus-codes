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
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		map<lli, int> A;
		lli a, s = 0;
		ff(i,1,n)
		{
			cin >> a;
			A[a]++;
			s += a;
		}
		map<lli, int>::iterator itr, itr1;
		bool f = true;
		for (itr = A.begin(); itr != A.end(); ++itr)
		{
			lli a = itr -> first;
			if((s - a) % 2 == 1)
				if(A[(s - a) / 2] != 0)
				{
					A[a]--;
					A[(s - a) / 2]--;
					for (itr1 = A.begin(); itr1 != A.end(); ++itr1)
						while(A[itr1 -> first]--)
							cout << itr1 -> first << " ";
					f = false;
					break;
				}
		}
		if(f)
			cout << "-1";
		cout << "\n";	
	}
	return 0;
}
