#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
};


void insertEnd(Node *head,int d){
   Node *temp = new Node; 
   temp->data=d;
   temp->next=NULL;

   if(head==NULL){
    head = temp;
    return;
   }

   Node *current = head;
   while(current->next!=NULL){
    current=current->next;
   }
   current->next=temp;


}
int main(){
    Node *head = nullptr;
    int n,x;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        insertEnd(head,x);
    }

    int R;
    cin>>R;
    deleteByValue(head,R);

    display(head);
}