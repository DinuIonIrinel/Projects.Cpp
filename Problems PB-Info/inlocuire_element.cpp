#include <iostream>
using namespace std;
int main() {
    int arr[5] = { 1,2,3,4,5};
    int lenght = 5;
    int position , new_number;
    cin >> position;
            for ( int j = position; j < lenght - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            lenght --;
    for ( int i = 0; i < lenght; i++)
        cout << arr[i] << " ";
    return 0;
}
