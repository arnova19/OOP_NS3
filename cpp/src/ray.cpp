#include "ray.h"

double raychannel::EstimateBer(double snrDb)
{

    return 1.0 / (1.0 + snrDb * 0.5);

}
