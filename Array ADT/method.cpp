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
int get(Array arr,int index){
    if(index >= 0 && index < arr.length){
        return arr.A[index];
    }else{
        return -1;  // supposing that -1 is not in array 
    }
}
void set(Array arr,int index,int element){
     if(index >= 0 && index < arr.length){
        arr.A[index] = element;
    }else{
        cout << "Enter correct index"; 
    }
}
int max(Array arr){
    int Max = arr.A[0];
    for (int i = 1; i < arr.length; i++){
        if(Max < arr.A[i]){
            Max = arr.A[i];
        }
    }
    return Max;
}
int min(Array arr){
    int Min = arr.A[0];
    for (int i = 1; i < arr.length; i++){
        if(Min > arr.A[i]){
            Min = arr.A[i];
        }
    }
    return Min;
}
int sum(Array arr){
    int Sum = arr.A[0];
    for (int i = 1; i < arr.length; i++){
        Sum = Sum + arr.A[i];
    }
    return Sum;
}
int average(Array arr){
    int Avg = arr.A[0];
    for (int i = 1; i < arr.length; i++){
        Avg = Avg + arr.A[i];
    }
    return (Avg)/arr.length;
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
}

