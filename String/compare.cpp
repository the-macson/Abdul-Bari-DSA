#include<bits/stdc++.h>
using namespace std;
void compare(string str,string str2){
    bool check = true;
    if(str.length() == str2.length()){
        for (int i = 0; i < str.length(); i++){
            if(str[i] != str2[i]){
                check = false;
            }
        }
    }else{
        check = false;
    }
    if(check){
        cout <<"String are equal";
    }else{
        cout <<"String are not equal";
    }
}
int main(){
    string str,str2;
    cout <<"Enter 1st String : ";
    getline(cin,str);
    cout <<"Enter 2nd String : ";
    getline(cin,str2);
    compare(str,str2);
}