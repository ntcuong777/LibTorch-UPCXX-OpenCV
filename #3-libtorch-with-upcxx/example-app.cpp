#include <torch/torch.h>
#include <iostream>
#include <upcxx/upcxx.hpp>
#include "print.h"

int main() {
    // // setup UPC++ runtime
    // upcxx::init();
    // std::cout << "Hello world from process " << upcxx::rank_me() << " out of " << upcxx::rank_n() << " processes" << std::endl;
    // // close down UPC++ runtime

    // print_value((int) upcxx::rank_me());

    // upcxx::finalize();


    // setup UPC++ runtime
    upcxx::init();
    torch::Tensor tensor = torch::rand({2, 3});
    std::cout << "Hello world from process " << upcxx::rank_me() << " out of " << upcxx::rank_n() << " processes" << std::endl
      << "\t" << tensor << std::endl;
    // close down UPC++ runtime

    print_value((int) upcxx::rank_me());

    upcxx::finalize();
}
