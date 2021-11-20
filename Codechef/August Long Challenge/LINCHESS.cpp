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
        int n;
        lli k;
        cin >> n >> k;
        lli P[n];
        bool flag = false;
        int pos = -1;
        lli min = LONG_MAX;
        ff(i,0,n - 1)
        {
            cin >> P[i];
            if( k % P[i] == 0 )
               if( min > ( k / P[i] ) )
                    min = k / P[i], pos = i, flag = true;
        }
        if( flag )
            cout << P[pos] << endl;
        else
            cout << pos << endl;
	}
	return 0;
}

