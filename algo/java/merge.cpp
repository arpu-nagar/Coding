#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int s,int m,int end){
    int n1 = m - s + 1;
    int n2 = end - m;
    int L[n1], R[n2];
    int i, j, k;
    for (int i = 0; i < n1;i++)
        L[i] = arr[s + i];

    for (int j = 0; j < n2;j++)
        R[j] = arr[m + 1 + j];

    i = j = 0;
    k = s;
    while(i<n1 && i<n2){
        if(L[i] <= R[i]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i <n1){
        arr[k++] = L[i++];
    }
    while(j < n2){
        arr[k++] = R[j++];
    }
}

void mergeSort(int arr[],int start,int end)
{
    if(start > end) return;
    int mid = (start + end)/2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, start, mid, end);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++) cout << arr[i];
}