#include<bits/stdc++.h>
using namespace std;
class Array{
    public:
    int A[20];
    int size = 20;
    int length;
};
void add(Array *arr,int element){
    if(arr->length < arr->size){
        arr->A[arr->length] = element;
        arr->length++;
    }else{
        cout << "Element can't be added";
    }
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
    int n,i,element;
    // cout <<"Enter the size of array : ";
    // cin >> arr.size;
    // arr -> A = new int[arr.size];
    arr.length = 0;
    cout <<"Enter number of numbers : ";
    cin >> n;
    cout <<"Enter the elements : ";
    for ( i = 0; i < n; i++){
        cin >> arr.A[i];
    }
    arr.length = n;
    Display(arr);
    cout << "Enter the element for add : ";
    cin >> element;
    add(&arr,element);
    Display(arr);
}