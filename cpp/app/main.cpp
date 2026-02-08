#include <iostream>
#include "AwgnChannelModel.h"
#include "ray.h"
#include "IChannelModel.h"

int main() {
    double snr = 5.0;
    int choice = 2;   // 1 = AWGN, 2 = Rayleigh
    
    IChannelModel*model = nullptr;

    if (choice == 1) {
        std::cout << "Using AWGN model" << std::endl;
        model = new AwgnChannelModel();
    } else {
        std::cout << "Using Rayleigh model" << std::endl;
        model = new raychannel();
    }
    double ber = model->EstimateBer(snr);
    std::cout << "BER is just to change  = " << ber << std::endl;
    return 0;
}

