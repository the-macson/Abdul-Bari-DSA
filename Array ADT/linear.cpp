#include<bits/stdc++.h>
using namespace std;
class Array{
    public:
    int A[20];
    int size = 20;
    int length;
};
bool serach(Array *arr,int find){
    for (int i = 0 ; i < arr->length ; i++){
        if(find == arr -> A[i]){
            return true;
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
    if(serach(&arr,find)){
        cout << "Element found";
    }else{
        cout << "Element not found";
    }
}

