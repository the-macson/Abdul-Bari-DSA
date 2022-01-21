#include<bits/stdc++.h>
using namespace std;
class Array{
    public:
    int A[20];
    int size = 20;
    int length;
};
void Display(Array arr){
    cout <<"Elements are : ";
    for (int i = 0; i < arr.length ; i++){
        cout << arr.A[i] <<" ";
    } 
    cout << endl;
}
void sortInsert(Array *arr, int element){
    int i = arr->length -1;
    while(element < arr->A[i]){
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = element;
    arr->length++;
}
bool checkSorted(Array arr){
    for (int i = 0; i < arr.length -1; i++){
        if(arr.A[i] > arr.A[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    Array arr;
    int n,i,element;
    arr.length = 0;
    cout <<"Enter number of numbers : ";
    cin >> n;
    cout <<"Enter the elements : ";
    for ( i = 0; i < n; i++){
        cin >> arr.A[i];
    }
    arr.length = n;
    Display(arr);
    // cout << "Enter the element for Insert : ";
    // cin >> element;
    // sortInsert(&arr,element);
    // Display(arr);
    if(checkSorted(arr)){
        cout << "Array is sorted";
    }else{
        cout <<"Array is not sorted";
    }
}

