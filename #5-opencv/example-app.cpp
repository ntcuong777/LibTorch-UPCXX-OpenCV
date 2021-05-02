#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace cv;

int main() {
    std::string image_path = samples::findFile("../image.jpeg");
    
    Mat img = imread(image_path, IMREAD_COLOR);
    if(img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
        return 1;
    }

    // Show output image
    imshow("Display window", img);
    int k = waitKey(0); // Wait for a keystroke in the window

    return 0;
}
