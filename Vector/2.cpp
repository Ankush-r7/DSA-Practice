// Reverse an array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<1) return 0;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}