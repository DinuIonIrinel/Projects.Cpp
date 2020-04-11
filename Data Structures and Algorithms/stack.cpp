#include <iostream>
using namespace std;
const int n=100;
bool isEmpty(int k) {
    if (k == 0)
        return true;
    return false;
}
void push (int stiva[] , int &k ,int number) {
    k = k + 1;
    stiva[k] = number;
}
int peek (int stiva[] , int &k) {
    return stiva[k];
}
int pop (int stiva[] , int &k)
{
    int result = peek(stiva,k);
    k = k - 1;
    return result;
}
int sizep(int k )
{
    return k;
}
void display (int stiva[], int &k) {
    for (int i = 1; i <= k; ++i)
        cout << stiva[i] << " " ;
}
int main()
{   int stiva[n], k = 0;
    push(stiva,k,2);
    push(stiva,k,4);
    push(stiva,k,6);
    push(stiva,k,8);
    display(stiva ,k);


    return 0;
}
