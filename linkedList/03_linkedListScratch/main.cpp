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
      };
    };
};

int main(){
  
  List ll;
  
  return 0;
}