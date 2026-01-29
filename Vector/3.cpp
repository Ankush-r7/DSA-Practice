#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    bool isSorted = true;
    cin>>n;
    if(n<1) return 0;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=n-1;i>0; i--){
        if(arr[i]<arr[i-1]){
            isSorted = false;
            break;
        }
    }
    if(isSorted){
        cout<<"True";
    }
    else{
        cout<<false;
    }

}