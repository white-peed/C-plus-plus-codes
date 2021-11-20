#include<bits/stdc++.h>

#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define vii vector<vi>
#define pii pair<int,int>

using namespace std;

int power( lli n )
{
    int sum = 0;
    while( n != 0 )
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
        int n;
        cin >> n;
        int chf = 0, mor = 0;
        lli a, b;
        ff(i,1,n)
        {
            cin >> a >> b;
            if( power(a) >= power(b) )
                chf++;
            if( power(a) <= power(b) )
                mor++;
        }
        if( chf > mor )
            cout << "0 " << chf << "\n";
        else if( chf < mor )
            cout << "1 " << mor << "\n";
        else
            cout << "2 " << chf << "\n";
	}
	return 0;
}
