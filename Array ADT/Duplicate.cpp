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
// print duplicate element of sorted array
void Duplicate(Array arr){
    int lastdup = 0;
    cout <<"Duplicate elements are : ";
    for (int i = 0; i < arr.length -1 ; i++){
        if(arr.A[i] == arr.A[i+1] && lastdup != arr.A[i]){
            cout << arr.A[i] <<" ";
            lastdup = arr.A[i];
        }
    }
}
void Duplicate2(Array arr){
    for (int i = 0; i < arr.length -1 ; i++){
        if(arr.A[i] == arr.A[i+1]){
            int j = i + 1;
            while (arr.A[i] == arr.A[j]){
                j++;
            }
            cout << arr.A[i] <<" appering " << j - i <<" times" << endl;
            i = j -1;
        }
    }
}
// using hashing method
void Duplicate3(Array arr){
    int arr1[arr.A[arr.length - 1]+1] = {0};
    for (int i = 0; i < arr.length; i++){
        arr1[arr.A[i]]++;
    }
    cout <<"Duplicates elements are : "<< endl;
    for (int i = 0; i <= arr.A[arr.length -1]; i++){
        if(arr1[i] > 1){
            cout << i <<" appering " << arr1[i] <<" times" << endl;
        }
    }
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
    Duplicate2(arr);
    Duplicate3(arr);
}

