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
// if messing element is 1
void messing(Array arr){
    int diff = arr.A[0];
    for (int i = 0; i < arr.length; i++){
        if(diff != arr.A[i] - i){
            cout << "Missing element is : " << i + diff;
            break;
        }
    }
}
// if messing element is more than 1
void messing1(Array arr){
    int diff = arr.A[0];
    cout << "Missing elements are : ";
    for (int i = 0; i < arr.length; i++){
        if(diff != arr.A[i] - i){
            while(diff < arr.A[i] - i){
                cout << i + diff <<" ";
                diff++;
            }
        }
    }
}
// finding missing element using hashing 
void missing2(Array arr){
    int max = arr.A[0] , min = arr.A[0];
    for (int i = 1; i < arr.length; i++){
        if(arr.A[i]  > max){
            max = arr.A[i];
        }else if(arr.A[i] < min){
            min = arr.A[i];
        }
    }
    int arr1[max - min] = {0};
    for (int i = 0; i < arr.length; i++){
        arr1[arr.A[i] - min]++;
    }
    cout <<"Missing element : ";
    for (int i = 0; i < max-min; i++){
        if(arr1[i] == 0){
            cout << i + min << " ";
        }
    }
}
int main(){
    Array arr;
    int n,i;
    arr.length = 0;
    cout <<"Enter number of numbers : ";
    cin >> n;
    cout <<"Enter the elements : ";
    for ( i = 0; i < n; i++){
        cin >> arr.A[i];
    }
    arr.length = n;
    Display(arr);
    // messing1(arr);
    missing2(arr);
}

