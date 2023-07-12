#include <bits/stdc++.h>
using namespace std; 
struct Node {
  int data;
  Node* next;
};

class LinkedList {
public:
  Node* head;

  LinkedList() { //a constructor for initializing the head var
    head = nullptr;
  }

  void insert(int data) {
    Node* new_node = new Node();// getting the address of a new node
    new_node->data = data;//can also be written as (*new_node).data= data
    new_node->next = head;//for the first call of insert func 'next' pointer now is set to null
    head = new_node;// head is now set to the adress of new node
  }

  void traverse() {
    Node* current_node = head;
    while (current_node != nullptr) {
      cout << current_node->data << endl;
      current_node = current_node->next;
    }
  }
};

int main() {
  //freopen("input.txt","r",stdin);
  freopen("output.txt", "w", stdout);
  LinkedList list;
  list.insert(10);
  list.insert(20);
  list.insert(30);
  list.insert(90);
  list.traverse();
  return 0; // output [90 30 20 10]
}
