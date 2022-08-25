#include<bits/stdc++.h>
using namespace std;

void solve(long long n){
	while(n!=1){
		if(n%2!=0){
			n=n*3+1;
		}
		else{
			n/=2;
		}
		cout<<n<<" ";
	}
}

int main(){
		long long n;
		cin>>n;
		cout<<n<<" ";
		solve(n);
		
	return 0;
}
