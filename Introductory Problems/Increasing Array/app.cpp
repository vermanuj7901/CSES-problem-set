#include<bits/stdc++.h>
using namespace std;

long long increasingArray(int arr[], int n){
    int c[n-1];
    
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            c[i-1] = abs(arr[i]-arr[i-1]);
            arr[i] = arr[i-1];
        }
        else{
            c[i-1] = 0;
        }
    }

    long long sum=0;
    for(int i=0; i<n-1; i++){
        sum+=c[i];
    }

    return sum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<increasingArray(arr, n);
}