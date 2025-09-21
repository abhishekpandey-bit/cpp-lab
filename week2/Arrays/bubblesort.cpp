#include<iostream>
using namespace std;
void bubblesort(int arr[] , int n);
int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    //sort arr using bubble sort
    bubblesort(arr,n);
    for(auto i: arr)
    cout << i << " ";
    
    return 0;
}
void bubblesort(int arr[] , int n){
    for(int i =0 ;i < n-1;i++){  // counts passes over the array.
        for(int j = 0; j < n -i-1;j++){
            //swap if the element found is
            //greater than the next element
            if(arr[j] > arr[j+1])
            swap(arr[j],arr[j+1]);  


        }
    }
}