#include "src/model.h"
#include <iostream>
using keras2cpp::Model;
using keras2cpp::Tensor;

int main() {
    // Initialize model.
    auto model = Model::load("example.model");
    float a, b, c;
    // Create a 1D Tensor on length 10 for input data.
    std::cout << "Enter Team 1 points" << std::endl;
    std::cin >> a;
    std::cout << "Enter Team 2 points" << std::endl;
    std::cin >> b;
    std::cout << "Enter Time" << std::endl;
    std::cin >> c;
    Tensor in{3};
    in.data_ = {a, b, c};

    // Run prediction.
    Tensor out = model(in);
    std::cout << "Our result is " << std::endl;
    out.print();
    return 0;
}
