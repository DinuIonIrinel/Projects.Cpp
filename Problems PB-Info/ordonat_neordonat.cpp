#include <iostream>
using namespace std;
bool sortat_crescator(int a[],int n) {
  bool sort = false;
  for ( int i = 1 ; i < n; ++i ) {
      if ( a[i] <= a[i+1]) {
        sort = true;
      }
  }
  return sort;
}
bool sortat_descrescator(int a[],int n) {
  bool sort = true;
  for ( int i = 1; i < n; ++i ) {
    for ( int j = i + 1; j <= n; ++j) {
      if ( a[i] <= a[j]) {
        sort = false;
        break;
      }
    }
  }
  return sort;
}
bool sortat_constant(int a[],int n) {
  bool sort = true;
  for ( int i = 1; i < n; ++i ) {
    for ( int j = i + 1; j <= n; ++j) {
      if ( a[i] != a[j]) {
        sort = false;
        break;
      }
    }
  }
  return sort;
}
bool sortat_strict_crescator(int a[],int n) {
  bool sort = false;
  for ( int i = 1 ; i < n; ++i ) {
      if ( a[i] < a[i+1] ) {
        sort = true;
      }
  }
  return sort;
}
bool sortat_strict_descrescator(int a[],int n) {
  bool sort = true;
  for ( int i = 1; i < n; ++i ) {
    for ( int j = i + 1; j <= n; ++j) {
      if ( a[i] < a[j] ) {
        sort = false;
        break;
      }
    }
  }
  return sort;
}

int main() {
  int n,a[500];
  cin >> n;
  for ( int i = 1; i <= n; ++i )
    cin >> a[i];
  if ( sortat_strict_crescator(a,n) == true ) {
      cout << "sir strict crescator";
  } else if ( sortat_crescator(a,n) == true ) {
    cout << "sir crescator";
  }  else if ( sortat_descrescator(a,n) == true ) {
    cout << "sir descrescator";
  } else if ( sortat_strict_descrescator(a,n) == true ) {
    cout << "sir strict descrescator";
  } else if ( sortat_constant(a,n) == true ) {
    cout << "sir constant";
  } else {
    cout << "sir neordonat";
  }
  return 0;
}
