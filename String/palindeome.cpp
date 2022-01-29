#include<bits/stdc++.h>
using namespace std;
void palindeome(string str){
    int i = 0, j = str.length() - 1;
    bool check = true;
    while(i < j){
        if(str[i] != str[j]){
            check = false;
        }
        i++;
        j--;
    }
    if(check){
        cout <<"String is Palindeome";
    }else{
        cout <<"String is not Palindeome";
    }
}
int main(){
    string str;
    getline(cin,str);
    palindeome(str);
}