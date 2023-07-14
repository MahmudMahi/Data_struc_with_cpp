#include <bits/stdc++.h>
using namespace std; 
struct Node {
  int data;
  Node* next;
};

class LinkedList {
public:
  Node* head;

  LinkedList() {
    head = nullptr;
  }

  void insert(int data, int n=1) {  // so by setting the parametre into 1, we are actually saying that 
                                    //the default val of n, in case only one param is given will be 1
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next= NULL;
    if(n==1){
      new_node->next = head;
      head = new_node;
      return;
    }
    else{
      Node* new_node1= head;
      for(int i=0; i<n-2; i++){
        new_node1= new_node1->next;
      }
      new_node->next = new_node1->next;
      new_node1->next= new_node;
    }
    
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
  list.insert(2);  // for the first 4 val, since all their deafault n val is set to 1 the list'd be 6 8 9 2
  list.insert(9);  // then at 2nd pos there comes 3 and 5, it'll be 5 3
  list.insert(8); // updated list: 6 5 3 8 9 2
  list.insert(6); // then 4 will be added in pos 3
  list.insert(3,2); //final output:
  list.insert(4,3);// [6 5 3 4 8 9 2]
  list.insert(5,2);
  list.traverse();
  return 0;
}
