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
        lli c, r;
        cin >> c >> r;
        c = ceil(c / 9.0);
        r = ceil(r / 9.0);
        if(c < r)
            cout << 0 << " " << c << endl;
        else
            cout << 1 << " " << r << endl;
	}
	return 0;
}

