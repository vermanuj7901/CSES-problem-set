#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(char ch[], ll n){
	int count = 0;
	int max = 0;
	for(int i=0; i<(n-1); i++){
		if(ch[i]==ch[i+1]){
			count++;
		}
		else if(ch[i]!=ch[i+1]){
			count = 0;
		}
		if(count>=max){
			max = count + 1;
		}
	}
	cout<<max<<endl;
}

int main(){
	char ch[1000001];
	cin.getline(ch, 1000001);
	ll n = strlen(ch);
	if(n>1){	
		solve(ch, n);
	}
	else{
		cout<<"1"<<endl;
	}
	return 0;
}
