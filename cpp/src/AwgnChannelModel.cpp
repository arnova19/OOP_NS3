#include "AwgnChannelModel.h"

double AwgnChannelModel::EstimateBer(double snrDb)
{
    return snrDb*5;
}
