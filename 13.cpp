#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int A[n];
  for(int i = 0; i < n; i++){
    cin >> A[i];
  }
  int a = A[0]*A[5];
  for(int i = 0; i < n; i++){
    for(int j = i + 5; j < n; j++){
      if(a < A[i]*A[j]){
        a = A[i]*A[j];
      }
    }
  }
  cout << a;
}
