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
void Pair(Array arr,int number){
    int count = 0;
    for(int i = 0; i < arr.length - 1; i++){
        for (int j = i + 1; j < arr.length; j++){
            if(arr.A[i] + arr.A[j] == number){
                count++;
            }
        }
    }
    cout << "Total Pair's are " << count; 
}
// pair using hash table
void Pair1(Array arr,int number){
    int count = 0;
    int a[100] = {0};
    for(int i = 0; i < arr.length ; i++){
        if(arr.A[i] <= number){
            if(a[number - arr.A[i]] != 0){
                count++;
            } 
        }
        a[arr.A[i]]++;
    }
    cout << "Total Pair's are " << count;
}
// find pair of sorted array 
void Pair3(Array arr, int number){
    int count = 0;
    int i = 0, j = arr.length - 1;
    while (i < j){
        if(arr.A[i] + arr.A[j] == number){
            count++;
            i++;
            j--;
        }else if(arr.A[i] + arr.A[j] > number){
            j--;
        }else{
            i++;
        }
    }
    cout <<"Total Pair's are " << count;
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
    Pair1(arr,10);
    Pair3(arr,10);
}

