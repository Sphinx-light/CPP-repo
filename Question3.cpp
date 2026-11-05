#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertEnd(Node*& head, int data) {

    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;

    //if there are NO  nodes
    if(head == NULL){
        temp->next = head;
        head = temp;
        return;
    }

    Node* curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }

    curr->next = temp;

}


int count(Node* head)
{
    int count = 0;
    Node* temp = head;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;

}


bool isPalin(Node* &head)
{
    int len = count(head);
    cout<<"Total nodes in the list is : " << len << endl;
    int arr[len];


    //Create an array from the list
    Node* temp = head;
    int i = 0;
    while(temp != NULL){
        arr[i] = temp->data;
        i++;
        temp = temp->next;
    }


    //Check for palindrome in the array
    int s = 0 , e = len-1;
    while(s <= e){
        if(arr[s] != arr[e])
            return false;

        else{
            s++;
            e--;
        }        
    }
    return true;
}


Node* reverse(Node* &head) {
    int len = count(head);
    // cout<<"Total nodes in the list is : " << len << endl;
    int arr[len];


    //Create an array from the list
    Node* temp = head;
    int i = 0;
    while(temp != NULL){
        arr[i] = temp->data;
        i++;
        temp = temp->next;
    }



    //reverse the array
    int s = 0 , e = len-1;
    while(s <= e){
        swap(arr[s] , arr[e]);
        s++;
        e--;      
    }


    //Now create a list out of the array 
    //Change the head only at the start And for all the next iterations , head will remain at the starting node
    //So create another pointer "curr" which will keep track of the last node;

    //ACTUALLY IT IS SAME AS INSERT AT END - Whatever values you are getting from the array , just keep putting it at the end , but the head will be moved only for the 1st node, Look at the insertEnd() given above.

    //But we will have to create a NEW LIST. If we directly use insertEnd() it will add elements to the previous list.
    // so create a new list - meaning create new Head poinitng to NULL . Creating new head pointing to NULL is equal to creating a new list. In this new list , we will call insertEnd() which will keep inserting elements at the end from our array. 


    Node* newHead = NULL;

    for(int i = 0 ; i < len ; i++){
        insertEnd(newHead , arr[i]);
    }

    return newHead;
}


void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout<<"NULL" <<endl;
}

int main() {
    Node* head = nullptr;
    int n, x;

    cout<<"Enter the number of nodes"<<endl;
    cin >> n;

    cout<<"Enter the data in the list" <<endl;
    for (int i = 0; i < n; i++) {
        cin >> x;
        insertEnd(head, x);
    }
    display(head);

    //Check if list is palindrome or not
    bool ans = isPalin(head);
    if(ans)
        cout<< "YES !! List is a palindrome "<< endl;
    else
        cout<< "NO !! List is NOT a palindrome "<< endl;



    //Reverse the list
    Node* newHead = reverse(head);    
    display(newHead);



    
}