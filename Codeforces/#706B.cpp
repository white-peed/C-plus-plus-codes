    #include <bits/stdc++.h>
    using namespace std;
    
    int main() 
    {
    	int n, q, a, i;
    	cin >> n;
    	int A[n];
    	for(i = 0; i < n; i++)
    	    cin >> A[i];
    	sort(A,A + n);
    	cin >> q;
        while(q--)
        {
            cin >> a;
            cout << (upper_bound(A, A+n, a) - A) << "\n";
        }
    	return 0;
    }