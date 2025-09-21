#include<iostream>
using namespace std;
void selectionsort(int arr[],int n);
int main(){
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    //sort arr using selection sort
    selectionsort(arr,n);
    for(auto i:arr)
    cout<<i<< " ";

    return 0;
}
void selectionsort(int arr[],int n){
    for(int i = 0; i< n -1 ; i++){
        // runs from i = 0 to n -2
        //after every iteration subarray becomes sorted
        //assume it current index as minimum element
        int min = i;
        //find the minimum element in the remaining
        //unsorted array
        for(int j = i+1;j < n; j++){
            if(arr[j]< arr[min])
            min = j;
            //we compare all elements after i
            // if find any element smaller than arr min ,update min with that index
            // by end min will hold smallest index

        }
        //if the new minimum element found ,swap
        // it with current index
        if(min != i){
            swap(arr[i],arr[min]);
        }
    }
}