#include "Linear.h"

namespace ofxPennerEasing
{
float Linear::ease(float t, float b , float c, float d)
{
    return c * t / d + b;
}
}
