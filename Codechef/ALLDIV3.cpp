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
		int n;
        int A[3];
        A[0] = 0;
        A[1] = 0;
        A[2] = 0;
        cin >> n;
        lli a;
        ff(i,1,n)
        {
            cin >> a;
            A[(int)(a%3)]++;
        }
        int b = min(A[1], A[2]);
        A[1] -= b;
        A[2] -= b;
        if(A[1] == 0 and A[2] == 0)
            cout << b << "\n";
        else if(A[1] == 0)
            cout << (A[2]%3 ? -1 : (b + 2*A[2]/3)) << "\n";
        else
            cout << (A[1]%3 ? -1 : (b + 2*A[1]/3)) << "\n";
	}
	return 0;
}
