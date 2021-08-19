#include "src/model.h"
#include <iostream>
using keras2cpp::Model;
using keras2cpp::Tensor;

int main() {
    // Initialize model.
    auto model = Model::load("example.model");
    float a, b, c;
    // Create a 1D Tensor on length 10 for input data.
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    Tensor in{3};
    in.data_ = {a, b, c};

    // Run prediction.
    Tensor out = model(in);
    out.print();
    return 0;
}
