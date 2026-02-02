#include <iostream>
#include "AwgnChannelModel.h"
#include "ray.h"
#include "IChannelModel.h"

int main() {
    double snr = 5.0;
    int choice = 2;   // 1 = AWGN, 2 = Rayleigh
    
    IChannelModel*model = nullptr;

    if (choice == 1) {
        AwgnChannelModel model;
        std::cout << "Using AWGN model" << std::endl;
        std::cout << "BER = " << model.EstimateBer(snr) << std::endl;
        model = new AwgnChannelModel();
    } else {
        raychannel ray;
        std::cout << "Using Rayleigh model" << std::endl;
        std::cout << "BER = " << ray.EstimateBer(snr) << std::endl;
        model = new raychhannel();
    }
    double ber = model->EstimateBer(snr)
    std::cout << "BER = " << ber << std::endl;
    return 0;
}

