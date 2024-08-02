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

double p, r;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> p >> r;
  const auto& x = p / r;
  if (x < 0.2) {
    cout << "weak";
  } else if (x < 0.4) {
    cout << "normal";
  } else if (x < 0.6) {
    cout << "strong";
  } else {
    cout << "very strong";
  }

  return 0;
}