#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int start,int mid, int end){
    vector<int> temp;
    int i = start, j = mid+1;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid) temp.push_back(arr[i++]);
    while(j<=end) temp.push_back(arr[j++]);

    for(int i = 0;i<temp.size();i++){
        arr[start + i] = temp[i];
    }

}
void mergesort(int arr[], int start, int end){
    if(start<end)
    {
        int mid = start + (end-start)/2;
        mergesort(arr, start, mid);
        mergesort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }    
}
int main(){
    int arr[7] = {1,2,3,4,1,7,8};
    mergesort(arr,0,6);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}