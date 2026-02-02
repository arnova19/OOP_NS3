#include <iostream>
#include "AwgnChannelModel.h"
#include "ray.h"

int main() {
    double snr = 10.0;
    int choice = 2;   // 1 = AWGN, 2 = Rayleigh

    if (choice == 1) {
        AwgnChannelModel model;
        std::cout << "Using AWGN model" << std::endl;
        std::cout << "BER = " << model.EstimateBer(snr) << std::endl;
    } else {
        raychannel model;
        std::cout << "Using Rayleigh model" << std::endl;
        std::cout << "BER = " << model.EstimateBer(snr) << std::endl;
    }

    return 0;
}

