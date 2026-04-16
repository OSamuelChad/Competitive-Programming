//https://cses.fi/problemset/result/16913124/

#include <iostream>
 
using namespace std;
 
int main() {
 
  long N;
  cin >> N;
 
  int RealSum = (N * (N + 1)) / 2;
  int Sum = 0;
 
  for (int i = 0; i < N - 1; i++) {
    int num;
    cin >> num;
 
    Sum += num;
  }
 
  cout << RealSum - Sum << endl;
  
  return 0;
}