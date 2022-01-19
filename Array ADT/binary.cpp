#include<bits/stdc++.h>
using namespace std;
class Array{
    public:
    int A[20];
    int size = 20;
    int length;
};
bool binary(Array *arr,int find){
    int l = 0;
    int h = arr -> length; 
    int mid;
    while (l <= h){
        mid = (l + h)/2;
        if(find == arr -> A[mid]){
            return true;
        }else if(arr->A[mid] < find){
            l = mid + 1;
        }else{
            h = mid - 1;
        }
    }
    return false;
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
    cout << "Enter the element for serach : ";
    cin >> find;
    if(binary(&arr,find)){
        cout << "Element found";
    }else{
        cout << "Element not found";
    }
}

