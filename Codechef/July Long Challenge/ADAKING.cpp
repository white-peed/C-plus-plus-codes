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
        int k;
        cin >> k;
        cout << "O";
        k--;
        ff(i,1,8){
            ff(j,1,8)
            {
                if(i == 1 && j == 1)
                    j++;
                if(k > 0)
                    cout << ".";
                else
                    cout << "X";
                k--;
            }
            cout << "\n";
        }
        cout << "\n";
	}
	return 0;
}
