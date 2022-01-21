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
void arrange(Array *arr){
    int i = 0,j = arr->length -1;
    while (i < j){
        while(arr->A[i] < 0){
            i++;
        }
        while (arr->A[j] > 0)
        {
            j--;
        }
        if(i < j){
            swap(arr->A[i],arr->A[j]);
        }
    }   
}
int main(){
    Array arr;
    int n;
    arr.length = 0;
    cout <<"Enter number of numbers : ";
    cin >> n;
    cout <<"Enter the elements : ";
    for (int i = 0; i < n; i++){
        cin >> arr.A[i];
    }
    arr.length = n;
    Display(arr);
    arrange(&arr);
    Display(arr);
}

