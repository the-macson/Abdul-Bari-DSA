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
    int k = 0;
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
void addSparse(Sparse *s1,Sparse *s2,Sparse *s3){
    s3 -> m = s1 -> m;
    s3 -> n = s1 -> n;
    s3 -> num = s1->num + s2 ->num;
    s3 -> ele = new Element[s3->num];
    int i = 0,j = 0,k=0;
    while (i < s1->num && j < s2->num){
        if(s1->ele[i].i < s2->ele[j].i){
            s3->ele[k++] =  s1 -> ele[i++];
        }else if(s1->ele[i].i > s2->ele[j].i){
            s3->ele[k++] =  s2 -> ele[j++];
        }else if(s1->ele[i].j < s2->ele[j].j){
            s3->ele[k++] =  s1 -> ele[i++];
        }else if(s1->ele[i].j > s2->ele[j].j){
            s3->ele[k++] =  s2 -> ele[j++];
        }else{
            s3->ele[k++].x = s1->ele[i++].x  + s2->ele[j++].x;
        }
    }
    
}
int main(){
    Sparse s1;
    create(&s1);
    display(&s1);
    Sparse s2;
    create(&s2);
    display(&s2);
    Sparse s3;
    addSparse(&s1,&s2,&s3);
}