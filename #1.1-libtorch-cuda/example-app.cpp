#include <torch/torch.h>
#include <iostream>

int main() {
  std::cout <<"cuda::is_available():" << torch::cuda::is_available() << std::endl;
  torch::Tensor tensor = torch::rand({2, 3});
  std::cout << tensor << std::endl;

  torch::DeviceType device_type = at::kCPU;
  if (torch::cuda::is_available())
    device_type = at::kCUDA;

  torch::Tensor timg = torch::rand({2, 3}).to(at::kCUDA);
  std::cout << timg << std::endl;

}
