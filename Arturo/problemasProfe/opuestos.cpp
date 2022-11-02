#include <bits/stdc++.h>


using namespace std;
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  deque<int> coso;
  int n;
  cin >> n;
  int x;

  int arr[n/2];
  for(int i = 0; i < n; i++){
      cin >> x;
      coso.emplace_back(x);
  }

  for(int i = 0; i < n/2; i++){
      arr[i] = coso.back() + coso.front();
      coso.pop_back(); coso.pop_front();

  }

  for(int i: arr){
      cout << i << " ";
  }

  return 0;
}
