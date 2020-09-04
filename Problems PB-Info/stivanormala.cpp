#include <bits/stdc++.h>
using namespace std;
// stiva functioaneaza dupa principiul LIFO - last in first out
// ultimul element care intra in stiva este primul element care iese
// declaratie stiva , si elementul stang si drept
int stiva[100];
int st = 1;
int dr = 0;
// functie care verifica daca stiva este goala
bool empty() {
  return st > dr;
}
// functie care elimina ultimul element
void pop() {
if(!empty()) {
    --dr;
  }
}
// functie care returneaza elementul din varful stivei
int top() {
  if(!empty()) {
    return stiva[dr];
  }
}
// functie care adauga un elemnent nou in stiva
void push(int val) {
  stiva[++dr] = val;
}
// functie care afiseaza elementele unei stive
void display() {
  while (!empty()) {
    cout << top() << " ";
    pop();
  }
}
int main() {
  push(1);
  push(2);
  push(3);
  push(4);
  pop();
  display();

  return 0;
}
