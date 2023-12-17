/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class node{
public:
    int data;
    node* next;
    
    node(int val){
        data = val;
        next = NULL;
    }
}

void insertAttail(node* &head,int val){
    node* n = new node(val);
    if (head == NULL){
        head = n;
        return;
    }
    
    node* temp =head;
    
    while (temp->next !=NULL){
        temp= temp -> next;
    }
    temp->next = n;
}

void display(node* head){
    node* temp = head;
    
    while (temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout <<"NULL" << endl;
}

void insertAthead(node* &head,int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

bool search(node* head, int key){
    node* temp = head;
    
    while (temp != NULL){
        if (temp->data == key)
        return true;
    
    temp = temp -> next;    
    }
    return false;
}

void deleteAtHead(node* &head){
    node* todelete = head;
    head = head->next;
    delete todelete;
}

void deletion(node* &head , int val){
    if (head == NULL){
        return;
    }
    
    if (head->next == NULL){
        deleteAtHead(head);
        return;
    }
    
    node* temp = head;
    
    while (temp->next->data != val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}


node* reverse(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    
    
    while (currptr != NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    
    return prevptr;
}

node* reverseRecursive(node* &head){
    if (head ==NULL || head->next == NULL){
        return head;
    }
    
    node* newhead = reverseRecursive(head->next);
    
    head->next->next = head;
    head->next = NULL;
    
    return newhead;
}
int main()
{
    cout<<"Hello World";

    return 0;
}
