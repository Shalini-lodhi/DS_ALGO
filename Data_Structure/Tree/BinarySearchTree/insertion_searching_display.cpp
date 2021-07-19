#include <bits/stdc++.h>
#include<iostream>
using namespace std;

struct Node{
  public:
  int data;  Node* left;  Node* right;

  Node(int val){
    data =val; left=NULL; right =NULL;
  }
};
/*for BST Display-inorder*/
void inorder( Node* &head)
{
 if (!head) {
        return;
    }
  Inorder(head->left);
  cout << head->data <<<<"->";
  Inorder(head->right);
  cout<<"NULL"<<endl;
}

/*for inserting data in BST*/
struct Node* insert(Node* &head, int val){
  Node* newNode = new Node(val);
  if(head == NULL){
    head = newNode;
  }
  else if(val <head->data){
    head->left = insert(head->left, val);
  }
  else if(val > head->data){
    head->right = insert(head->right, val);
  }
  return head;
}
 /*Min value function*/
 int FindMin(Node* &head){
   if(head == NULL){return -1;}
   else if(head -> left == NULL{return head -> data;}
   return FinMin(head->left);
 }

/*For searching BST*/
bool search(Node* &head, int val){
  if(head == NULL || head->data == val){
    return true;

  }
  else if(head -> data< val){
    return search(head->right, val);
  }
  else if(head -> data > val){
    search(head->left, val);
  }
  return false;
}
/*DeletionFunction*/
struct Node* DeleteNode(Node* head, int val){
  if(head == NULL){return head;}
  else if(val < head->data){head->left = DeleteNode(head->left, val);}
  else if(val > head->data){head->right = DeleteNode(head->right, val);}
  else if(head->left == NULL && head->right==NULL){delete head; head =NULL; }
  else if(head->left == NULL){Node* temp = head; head = head->right; delete temp;}
  else {if(head->right == NULL){Node* temp = head; head = head->left; delete head;}
  else {Node* temp = FinMin(head->right);head->data=temp->data; head->right=Delte(head->right, temp->data);}}
  return head;
}

int main(){
  Node* head = NULL;
  insert(head, 4);
  insert(head, 6);
  insert(head, 9);
  insert(head, 2);
  
  display(head);
  cout<<search(head, 0);

  return 0;
}

