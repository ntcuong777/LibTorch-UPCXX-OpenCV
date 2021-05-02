#include <torch/torch.h>
#include <upcxx/upcxx.hpp>

#include <iostream>

#include "print.h"

int main() {
    // setup UPC++ runtime
    upcxx::init();

	// Check CUDA devices    
	torch::DeviceType device_type = at::kCPU;
  	if (torch::cuda::is_available())
    	device_type = at::kCUDA;
	
	// Create random tensors
    torch::Tensor tensor_cpu = torch::rand({2, 3});
    torch::Tensor tensor_gpu = torch::rand({2, 3}).to(at::kCUDA);

	// Print out to check UPCXX with Torch CPU and GPU tensors
    std::cout << "Hello world from process " << upcxx::rank_me() << " out of " << upcxx::rank_n() << " processes" << std::endl
      << "\t" << tensor_cpu << std::endl
      << "\t" << tensor_gpu << std::endl;
	
	// Check external print function	
    print_value((int) upcxx::rank_me());

    // close down UPC++ runtime
    upcxx::finalize();
}
