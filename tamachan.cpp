#include <boost/algorithm/string.hpp>
#include <iostream>

namespace {
using namespace std;
using namespace boost;
} // namespace

int main() {
  string olis{"comma,separated,value"};
  vector<string> tokens;

  split(tokens, olis, [](char c) { return c == ','; });

  for(const auto& token : tokens)
      cout << token << '\n';

  return 0;
}
