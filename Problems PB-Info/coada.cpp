#include <bits/stdc++.h>
using namespace std;
int q[1005], st = 1, dr = 0;
bool empty() {
  return st > dr;
}
void pop() {
  if (!empty())
    st++;
}
int front() {
  return q[st];
}
void push(int val) {
  q[++dr] = val;
}
int main() {
  push(4);
  push(5);
  push(6);
  pop();
  pop();
  cout << front();
  
  return 0;
}
