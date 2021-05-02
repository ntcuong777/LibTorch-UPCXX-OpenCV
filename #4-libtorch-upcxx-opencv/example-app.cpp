#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#include <upcxx/upcxx.hpp>

#include <torch/torch.h>

#include <iostream>
#include "print.h"

using namespace cv;

int main() {

    // setup UPC++ runtime
    upcxx::init();

	// Check CUDA devices    
	torch::DeviceType device_type = at::kCPU;
  	if (torch::cuda::is_available())
    	device_type = at::kCUDA;
	
	// Create random tensors & test libtorch tensor
    torch::Tensor tensor_cpu = torch::rand({2, 3});
    torch::Tensor tensor_gpu = torch::rand({2, 3}).to(at::kCUDA);
    std::cout << tensor_cpu << std::endl << tensor_gpu << std::endl;
	
    // test external class/file with upcxx ranking
    print_value((int) upcxx::rank_me());
	
    // test opencv read and show image
    std::string image_path = "../image.jpeg";
    Mat img = imread(image_path, IMREAD_COLOR);
    if(img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
        return 1;
    }
    imshow("Display window", img);
    int k = waitKey(0); // Wait for a keystroke in the window
	
    // close down UPC++ runtime
    upcxx::finalize();
}
