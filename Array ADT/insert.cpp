#include<bits/stdc++.h>
using namespace std;
class Array{
    public:
    int A[20];
    int size = 20;
    int length;
};
void insert(Array *arr,int element,int index){
    if(index < arr -> length){
        for (int i = arr -> length; i > index; i--){
            arr -> A[i] = arr -> A[i-1];
        }
        arr -> A[index] = element;
        arr -> length ++;
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
    int n,i,element,index;
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
    cout << "Enter the index for element : ";
    cin >> index;
    Display(arr);
    insert(&arr,element,index);
    Display(arr);
}


    // cout <<"Enter the size of array : ";
    // cin >> arr.size;
    // arr -> A = new int[arr.size];