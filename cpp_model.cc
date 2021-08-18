#include "src/model.h"

using keras2cpp::Model;
using keras2cpp::Tensor;

int main() {
    // Initialize model.
    auto model = Model::load("example.model");

    // Create a 1D Tensor on length 10 for input data.
    Tensor in{3};
    in.data_ = {0, 2.0, 90.0};

    // Run prediction.
    Tensor out = model(in);
    out.print();
    return 0;
}
