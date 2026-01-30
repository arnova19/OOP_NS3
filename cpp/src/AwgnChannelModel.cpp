#include "AwgnChannelModel.h"

double AwgnChannelModel::EstimateBer(double snrDb)
{
    return 1.0 / (1.0 + snrDb);
}
