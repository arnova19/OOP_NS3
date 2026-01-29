#include <iostream>
#include "AwgnChannelModel.h"

int main() {
    AwgnChannelModel model;
    std::cout << "Calling estimates.." << std::endl;
    std::cout << "Result = " << model.EstimateBer(10.0) << std::endl;
    return 0;
}

