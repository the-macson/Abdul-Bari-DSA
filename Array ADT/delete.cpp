#include<bits/stdc++.h>
using namespace std;
class Array{
    public:
    int A[20];
    int size = 20;
    int length;
};
void Delete(Array *arr,int index){
    if(index < arr -> length){
        for (int i = index ; i < arr->length -1 ; i++){
            arr -> A[i] = arr -> A[i+1];
        }
        arr -> length --;
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
    int n,i,index;
    arr.length = 0;
    cout <<"Enter number of numbers : ";
    cin >> n;
    cout <<"Enter the elements : ";
    for ( i = 0; i < n; i++){
        cin >> arr.A[i];
    }
    arr.length = n;
    Display(arr);
    cout << "Enter the index for delete : ";
    cin >> index;
    Delete(&arr,index);
    Display(arr);
}

