//written by anuj
#include<bits/stdc++.h>
using namespace std;

void permutations(int n){
    int e=4;
    int o=1;
    int even_count;
    if(n<=3 && n!=1){
        cout<<"NO SOLUTION"<<endl;
    }
    else if(n==1){
        cout<<"1"<<endl;
    }
    else{
        if(n&1){
            even_count = n/2-1;
        }
        else{
            even_count = n/2-2;
        }
        for(int i=1; i<=even_count; i++){
            cout<<e<<" ";
            e+=2;
        }
        cout<<"2 "<<n<<" ";
        for(int i=1; i<=n/2; i++){
            cout<<o<<" ";
            o+=2;
        }
    }
}

int main(){
    int n;
    cin>>n;
    permutations(n);
}