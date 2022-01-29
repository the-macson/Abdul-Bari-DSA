// Creation of linked list with length n
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *next;
};
// transverse the linked list
void transversing(Node *temp){
    cout << "Linked List : ";
    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void rTrav(Node *temp){
    if(temp == NULL){
        return;
    }
    cout << temp -> data <<" ";
    rTrav(temp->next);
}
void rrTrav(Node *temp){
    if(temp == NULL){
        return;
    }
    rrTrav(temp->next);
    cout << temp -> data <<" ";
}
void count(Node *temp){
    int count = 0;
    while(temp != NULL){
        count++;
        temp =  temp -> next;
    }
    cout <<"Number of nodes are " << count;
}
Node * Serach(Node *temp,int element){
    Node *head = temp;
    Node *q = NULL;
    while (temp != NULL){
        if(temp-> data == element){
            q ->next = temp ->next;
            temp->next = head;
            head = temp;
            cout <<"Element found";
            return temp;
        }
        q = temp;
        temp = temp -> next;
    }
    cout <<"Element Not found";
    return head;
}
// creation of linked list
Node * Creation(int n){
    Node *head = NULL;
    Node *temp = NULL;
    int data;
    for (int i = 0; i < n; i++){
        cout <<"Enter the data : ";
        cin >> data ;
        temp = new Node();
        temp -> data = data;
        temp -> next = NULL;
        if(head == NULL){
            head = temp;
        }else{
            Node *p = head;
            while (p->next != NULL){
                p = p->next;
            }
            p->next = temp;
        }   
    }
    return head;
}
int main(){
    int n;
    cout << "Enter the number of elements in the linked list : ";
    cin >> n;
    Node *head = Creation(n);
    // transversing(head);
    // rrTrav(head);
    // count(head);
    head = Serach(head,6);
    transversing(head);
}