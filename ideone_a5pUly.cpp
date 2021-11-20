#define watch2(x, y) cerr <<#x<<": "<<x<<" | "<<#y<<": "<<y<< endl;
#define watch3(x, y, z) cerr <<#x<<": "<<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl;
#define hitAi ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define watch(x) cerr <<#x<<": "<<x<<endl;
#include <vector>
#include <queue>
#include<stack>
#include <map>
#include <set>
#include <fstream>
#include <utility>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include<string>
#include <limits>
#include<climits>
#define endl "\n"
#define mp make_pair
#define OO (long long)1e18
using namespace std;
 
vector<int> prime;
 
void generate_Primes(){
    int N = 1000000;
    int ar[N];
    memset(ar, 0, sizeof(ar));
    for( int i = 2; i*i < N; i++ ){
        if( !ar[i] ){
            for( int j = i*i; j < N; j += i ){
                ar[j] = 1;
            }
        }
    }
    for( int i = 2; i < N; i++ ){
        if( !ar[i] )prime.push_back(i);
    }
}
 
int main(){
    hitAi;
    int t;
    cin >> t;
    generate_Primes();
    while( t-- ){
        int n;
        cin >> n;
        vector<int> l(n+1), r(n+1);
        l[1] = 5, r[1] = 7;
        l[2] = 11, r[2] = 7;
        int next_prime_idx = 4;
        for( int i = 3; i < n; i++ ){
            if( l[i-1] == l[i-2] ){
                next_prime_idx++;
                l[i] = prime[next_prime_idx];
                r[i] = r[i-1];
            }
            else{
                l[i] = l[i-1];
                if( r[i-1] != 2 )r[i] = 2;
                else r[i] = 3;
            }
        }
        if( l[n-1] == l[n-2] )l[n] = r[n-1];
        else l[n] = l[n-1];
        r[n] = 5;
        for( int i = 1; i <= n; i++ ){
            cout << l[i] * r[i] << " ";
        }
        cout << endl;
    }
}