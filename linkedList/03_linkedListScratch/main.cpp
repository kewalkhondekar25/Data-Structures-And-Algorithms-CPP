#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

    Node(int value){
      data = value;
      next = NULL;
    };
};

class List {
  Node* head;
  Node* tail;

  public:
    List(){
      head = NULL;
      tail = NULL; 
    };

    void push_front(int data){
      Node* newNode = new Node(data);
      if(head == NULL){
        head = tail = newNode;
        return;
      }else{
        newNode->next = head;
        head = newNode;
      };
    };

    void printLL(){
      Node* temp = head;
      while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
      };
      cout << endl;
    };
};

int main(){
  
  List ll;

  ll.push_front(1);
  ll.push_front(2);
  ll.push_front(3);

  ll.printLL();
  
  return 0;
}