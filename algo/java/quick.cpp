#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int start,int end,int pivot){
    while(start<=end){
        while(arr[start] < pivot){
            start++;
        }
        while(arr[end] > pivot){
            end--;
        }
        if(start <= end){
            int t = arr[end];
            arr[end] = arr[start];
            arr[start] = t;
            start++;
            end--;
        }
    }
    return start;
}

void quicksort(int arr[],int start,int end){
    if(start < end){
        int mid = (start + end) / 2;
        int pivot = partition(arr, start, end, mid);

        quicksort(arr, start, pivot - 1);
        quicksort(arr, pivot + 1, end);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++) cout << arr[i];
}