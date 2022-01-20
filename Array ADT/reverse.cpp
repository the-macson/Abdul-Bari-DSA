#include<bits/stdc++.h>
using namespace std;
class Array{
    public:
    int A[20];
    int size = 20;
    int length;
};
// method 1st reverse a array using help of 2nd array
void reverse(Array *arr){
    int arr1[arr->length];
    for (int i = arr->length-1,j = 0; i >= 0 ; i--,j++){
        arr1[j] = arr->A[i];
    }
    for (int i = 0; i < arr->length; i++){
        arr->A[i] = arr1[i];
    }
}
// method 2nd 
void reverse1(Array *arr){
    for (int i = 0,j=arr->length-1; i < (arr->length)/2; i++,j--){
        swap(arr->A[i],arr->A[j]);
    }
}
void leftShift(Array *arr){
    for (int i = 0; i < arr->length -1; i++){
        arr->A[i] = arr->A[i+1];
    } 
    arr->A[arr->length-1] = 0;
}
void rightShift(Array *arr){
    for (int i = arr->length -1 ; i > 0; i--){
        arr->A[i] = arr->A[i-1];
    } 
    arr->A[0] = 0;
}
void leftRotate(Array *arr){
    int r = arr->A[arr->length -1];
    for (int i = 0; i < arr->length -1; i++){
        arr->A[i] = arr->A[i+1];
    } 
    arr->A[arr->length-1] = r;
}
void rightRotate(Array *arr){
    int r = arr->A[0];
    for (int i = arr->length -1 ; i > 0; i--){
        arr->A[i] = arr->A[i-1];
    } 
    arr->A[0] = r;
}
void Display(Array arr){
    cout <<"Elements are : ";
    for (int i = 0; i < arr.length ; i++){
        cout << arr.A[i] <<" ";
    } 
    cout << endl;
}
int main(){
    Array arr;
    int n,i,find;
    arr.length = 0;
    cout <<"Enter number of numbers : ";
    cin >> n;
    cout <<"Enter the elements : ";
    for ( i = 0; i < n; i++){
        cin >> arr.A[i];
    }
    arr.length = n;
    Display(arr);
    // reverse1(&arr);
    rightShift(&arr);
    Display(arr);
}

