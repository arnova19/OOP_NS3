#pragma once
#include IChannelModel.h

class raychannel : public IChannelModel {
public:
    double EstimateBer(double snrDb) override;
};
