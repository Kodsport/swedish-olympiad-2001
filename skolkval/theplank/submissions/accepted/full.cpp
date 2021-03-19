#include <bits/stdc++.h>
using namespace std;

int P(int x) {
    if (x < 0) return 0;
    if (x == 0) return 1;
    return P(x - 3) + P(x - 2) + P(x - 1);
}

int main() {
  int N;
  cin >> N;
  cout << P(N) << endl;
}
