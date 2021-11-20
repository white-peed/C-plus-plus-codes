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

int frequency(int a[], int n, int x)
{
    int count = 0;
    for (int i=0; i < n; i++)
       if (a[i] == x)
          count++;
    return count;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int A[n];
		ff(i,0,n-1)	cin >> A[i];
		int c = *min_element(A,A + n);
		cout << n - frequency(A,n,c) << "\n";	
	}
	return 0;
}
