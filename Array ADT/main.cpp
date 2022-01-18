#include<bits/stdc++.h>
using namespace std;
class Array{
    public:
    int *A;
    int size;
    int length;
};
void Display(Array arr){
    cout <<"Elements are : ";
    for (int i = 0; i < arr.length ; i++){
        cout << arr.A[i] <<" ";
    } 
}
int main(){
    Array arr;
    int n,i;
    cout <<"Enter the size of array : ";
    cin >> arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;
    cout <<"Enter number of numbers : ";
    cin >> n;
    cout <<"Enter the elements : ";
    for ( i = 0; i < n; i++){
        cin >> arr.A[i];
    }
    arr.length = n;
    Display(arr);
}