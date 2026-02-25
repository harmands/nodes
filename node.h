#ifndef NODE_H
#define NODE_H

#include <vector>

class NodeInput {
 public:
  NodeInput(std::vector<std::vector<double>> x, std::vector<double> y);

 private:
  std::vector<std::vector<double>> x;
  std::vector<double> y;
};

class Node {
 public:
  Node(double alpha);
  void fit(NodeInput node_input);

 private:
  double alpha;
  std::vector<double> m;
  double c;
};

#endif  // NODE_H
