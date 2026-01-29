// Find the largest and smallest element
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
    int maxi = arr[0];
    int mini = arr[0];
    for(int i=1;i<n;i++){
        if(maxi<arr[i]){
            maxi = arr[i];
        }
        if(mini>arr[i]){
            mini = arr[i];
        }
    }
    cout<<mini<<" "<<maxi;
    return 0;
    
}