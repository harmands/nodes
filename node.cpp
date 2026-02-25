#include "node.h"

Node::Node(double alpha) { this->alpha = alpha; }

void Node::fit(NodeInput node_input) {}

NodeInput::NodeInput(std::vector<std::vector<double>> x,
                     std::vector<double> y) {
  this->x = x;
  this->y = y;
}