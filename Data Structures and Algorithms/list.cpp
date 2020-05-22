#include <iostream>
using namespace std;
struct node {
  int value;
  node* next;
};
node* head = NULL;
void display(node* head) {
  while ( head != NULL) {
    cout << head -> value << "\n";
    head = head -> next;
  }
}
void insert_on_end(node* &head , int nvalue) {
  node* newnode = new node;
  newnode -> value = nvalue;
  newnode -> next = NULL;
  if ( head == NULL) {
    head = newnode;
  } else {
    node * current_node;
    while ( current_node -> next != NULL)
        current_node = current_node -> next;
    current_node -> next = newnode;
  }
}
void insert_on_top(node* &head , int nvalue) {
   node* newnode = new node;
   newnode -> value = nvalue;
   newnode -> next = NULL;
   newnode -> next = head;
   head = newnode;
}
void delete_element(node* predecessor ) {
  node* victim = predecessor -> next;
  predecessor -> next = predecessor -> next -> next;
  delete victim;
}
void delete_element_position(node* head, int position) {
  if ( position == 0 ) {
    node* victim = head;
    head = head -> next;
    delete victim;
  } else {
    node* predecessor = find_position(head , position - 1);
    delete_element(predecessor);
  }
}


int main() {
  insert_on_top( head , 1);
  insert_on_end( head , 2);
  insert_on_end( head , 3);
  insert_on_end( head , 4);
  display( head );
  return 0;
}
