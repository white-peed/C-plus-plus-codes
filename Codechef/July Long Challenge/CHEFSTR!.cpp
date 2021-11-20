#include<bits/stdc++.h>

#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define vii vector<vi>
#define pii pair<int,int>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
        lli n, sum = 0;
        cin >> n;
        lli S[n];
        ff(i,0,n - 1)   cin >> S[i];
        ff(i,1,n - 1)
        {
            sum += ( abs(S[i] - S[i-1]) - 1 );
        }
        cout << sum << "\n";
	}
	return 0;
}
