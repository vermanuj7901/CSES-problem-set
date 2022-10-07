//written by anuj
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long y,x;
        cin>>y>>x;
        long long n = max(y, x);
        long long same;
        same = (((n-1)*(n-1))+(n*n)+1)/2;
        if(x==y){
            cout<<same<<endl;
        }
        else{
            if(n&1){
                if(x==n){
                    cout<<(same+(n-y))<<endl;
                }
                else{
                    cout<<(((n-1)*(n-1))+x)<<endl;
                }
            }
            else{
                if(x==n){
                    cout<<(((n-1)*(n-1))+y)<<endl;
                }
                else{
                    cout<<(same+(n-x))<<endl;
                }

            }
        }
    }

}