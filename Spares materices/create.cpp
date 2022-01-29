#include<bits/stdc++.h>
using namespace std;
class Element{
    public:
    int i;
    int j;
    int x;
};
class Sparse{
    public:
    int m;
    int n;
    int num;
    Element *ele;
};
void create(Sparse *s){
    cout <<"Enter Dimensions ";
    cin >> s->m >> s->n ;
    cout <<"Number of non-zero element ";
    cin >> s->num;
    s->ele = new Element[s->num];
    cout <<"Enter all non-zero element ";
    for (int i = 0; i < s->num; i++){
        cin >> s->ele[i].i >> s->ele[i].j >> s->ele[i].x;
    }
}
void display(Sparse *s){
    int k=0;
    for (int i = 0; i < s->m; i++){
        for (int j = 0; j < s->n; j++){
            if(i ==  s->ele[k].i && j == s->ele[k].j){
                cout << s->ele[k++].x <<" ";
            }else{
                cout << "0 ";
            }
        }
        cout << endl;
    }
}
int main(){
    Sparse s;
    create(&s);
    display(&s);
}