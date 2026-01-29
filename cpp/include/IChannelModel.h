#pragma once

class IChannelModel {
public:
    virtual ~IChannelModel() {}

    virtual double EstimateBer(double snrDb) = 0;
};
