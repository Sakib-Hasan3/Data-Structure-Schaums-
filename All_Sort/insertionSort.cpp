#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n){
    for (int i = 1; i < n; i++)//notice i=1
    {
        int key=arr[i];
        int j = i-1;

        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        
    }
    
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout << "Unsorted array: ";
    printArray(arr,n);
    
    insertionSort(arr,n);

    cout << "sorted array: ";
    printArray(arr,n);
    
}