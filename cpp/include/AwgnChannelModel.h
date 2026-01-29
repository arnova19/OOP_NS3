#pragma once
#include "IChannelModel.h"

class AwgnChannelModel : public IChannelModel {
public:
    double EstimateBer(double snrDb);
};
