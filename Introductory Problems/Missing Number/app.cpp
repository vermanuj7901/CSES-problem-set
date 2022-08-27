#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll sum, ll n){
	ll actualSum = (n*(n+1))/2;
	ll ans = actualSum - sum;
	cout<<ans<<endl;
}

int main() {
	ll n;
	cin>>n;
    int arr[n];
    ll sum = 0;
    for(int i=0; i<(n-1); i++){
    	cin>>arr[i];
    	sum+=arr[i];
    }
    solve(sum, n);
	return 0;
}
