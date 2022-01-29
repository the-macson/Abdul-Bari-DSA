#include<bits/stdc++.h>
using namespace std;
void reverse(string str){
    int i = 0, j = str.length() - 1;
    while(i < j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    cout << str << endl;
}
int main(){
    string str;
    getline(cin,str);
    reverse(str);
}