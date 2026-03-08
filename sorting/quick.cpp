#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr, int start, int end){
    int idx = start - 1;
    int pivot = arr[end];
    for(int j = start;j<end;j++){
        if(arr[j] < pivot){
            idx++;
            swap(arr[idx],arr[j]);
        }
    }
    idx++;
    swap(arr[idx],arr[end]);
    return idx;
}
void quicksort(vector<int> &arr, int start, int end){
    if(start<end){
        int pivot = partition(arr,start,end);
        quicksort(arr,start,pivot-1);
        quicksort(arr,pivot+1,end);

    }
}
int main(){
    
    vector<int> arr(7);
    arr = {3,5,4,2,1,6,1};
    quicksort(arr,0,6);
    for(int i: arr){
        cout<<i<<" ";
    }
    return 0;
}