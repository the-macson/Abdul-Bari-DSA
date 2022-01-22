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
// if array is shorted
void Union(Array *arr,Array *arr2,Array *arr3){
    int i = 0, j= 0 , k = 0;
    while (i < arr->length && j < arr->length){
        if(arr->A[i] < arr2->A[j]){
            arr3->A[k++] = arr->A[i++];
        }else if(arr->A[i] > arr2->A[j]){
            arr3->A[k++] = arr2->A[j++];
        }else{
            arr3->A[k++] = arr2->A[j++];
            i++;
        }
    }
    for ( ; i < arr->length; i++){
        arr3->A[k++] = arr->A[i];
    }
    for ( ; j < arr2->length; j++){
        arr3->A[k++] = arr2->A[j];
    }
    arr3->length = k;
}
void Intersection(Array *arr,Array *arr2,Array *arr3){
    int i = 0, j= 0 , k = 0;
    while (i < arr->length && j < arr->length){
        if(arr->A[i] < arr2->A[j]){
            i++;
        }else if(arr->A[i] > arr2->A[j]){
            j++;
        }else{
            arr3->A[k++] = arr2->A[j++];
            i++;
        }
    }
    arr3->length = k;
}
void Difference(Array *arr,Array *arr2,Array *arr3){
    int i = 0, j= 0 , k = 0;
    while (i < arr->length && j < arr->length){
        if(arr->A[i] < arr2->A[j]){
            arr3->A[k++] = arr->A[i++];
        }else if(arr->A[i] > arr2->A[j]){
            j++;
        }else{
            j++;
            i++;
        }
    }
    for ( ; i < arr->length; i++){
        arr3->A[k++] = arr->A[i];
    }
    arr3->length = k;
}
int main(){
    Array arr,arr2,arr3;
    int n1,n2,find;
    arr.length = 0;
    cout <<"Enter number of numbers for 1st and 2nd array : ";
    cin >> n1 >> n2;
    cout <<"Enter the elements : ";
    for (int i = 0; i < n1; i++){
        cin >> arr.A[i];
    }
    arr.length = n1;
    cout <<"Enter the elements : ";
    for (int i = 0; i < n2; i++){
        cin >> arr2.A[i];
    }
    arr2.length = n2;
    // arr3.length = n1 + n2;
    // Display(arr);
    // cout << "Enter the element for serach : ";
    // cin >> find;
    Union(&arr,&arr2,&arr3);
    Display(arr3);
}

