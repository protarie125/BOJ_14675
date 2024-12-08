#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll N;
vl deg;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> N;
  deg = vl(N + 1, 0);
  for (auto i = 1; i < N; ++i) {
    ll a, b;
    cin >> a >> b;

    ++deg[a];
    ++deg[b];
  }

  auto is_leaf = vl(N + 1, false);
  for (auto i = 1; i <= N; ++i) {
    if (deg[i] == 1) {
      is_leaf[i] = true;
    }
  }

  ll q;
  cin >> q;
  while (0 < (q--)) {
    ll t, k;
    cin >> t >> k;

    if (t == 1) {
      if (is_leaf[k]) {
        cout << "no\n";
      } else {
        cout << "yes\n";
      }
    } else if (t == 2) {
      cout << "yes\n";
    }
  }

  return 0;
}