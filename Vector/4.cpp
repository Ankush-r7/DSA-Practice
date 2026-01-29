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
    vector<int> frq(10);
    for(int i=0;i<n;i++){
        frq[arr[i]]++;
    }
    for(int i : frq){
        cout<<i<<" ";
    }
    return 0;
}