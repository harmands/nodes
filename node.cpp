#include <iostream>
#include <vector>

template <typename T>
class Node {
  public:
    Node(double alpha) {
      this->alpha = alpha;
    }

    void fit(std::vector<double> x) {
      return;
    }

  private:
    double alpha;
};