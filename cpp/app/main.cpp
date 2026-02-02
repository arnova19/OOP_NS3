#include <iostream>
#include "AwgnChannelModel.h"
#include "ray.h"

int main() {
    AwgnChannelModel model;
    raychannel ray;

    std::cout << "Calling estimates.." << std::endl;
    std::cout << "Result = " << model.EstimateBer(5.0) << std::endl;
    std::cout << "SNR 20 ->" << model.EstimateBer(10.0) << std::endl;
    std::cout << ray.EstimateBer(6.9) << std::endl;
    return 0;
}

