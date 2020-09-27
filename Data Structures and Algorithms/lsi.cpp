#include <iostream>
using namespace std;
struct nod {
  int info;
  nod *next;
};
nod *p = NULL;
void adding(nod *&p,int val) {
  if ( p == NULL) { //if the list is empty
    p = new nod;
    p -> info = val;
    p -> next = NULL;
  } else { // if the list isn't empty
    nod *q = p;
    while ( q -> next != NULL) {
      q = q -> next;
    }
    nod * nou = new nod;
    nou -> info = val;
    nou -> next = NULL;
    q -> next = nou;
  }
}
void deleting(nod *p) {
  if ( p -> next -> next != NULL ) {
    if ( p -> info % 2 ==0 )
      p -> next = p -> next -> next;
    p = p -> next;
  }
}
int main() {
  int n;
  cin >> n;
  for ( int i = 1; i <= n; ++i) {
    int x;
    cin >> x;
    adding(p,x);
  }
  deleting(p);
  while (p) {
    cout << p -> info << " ";
    p = p -> next;
  }

  return 0;
}
