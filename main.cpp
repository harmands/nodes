#include <vector>

#include "node.h"

int main() {
  Node node(0.5);
  node.fit(NodeInput({{1, 2}, {3, 4}}, {1, 2}));
  return 0;
}
