#include <iostream>
using namespace std;

int main() {
  int n, k, a = 1;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> k;
    if(k % 2 == 1 and k % 3 == 0){
      a*= k;
    }
  }
  cout << a;
}
