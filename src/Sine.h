#ifndef _PENNER_SINE
#define _PENNER_SINE

#include <math.h>

#ifndef PI
#define PI  3.14159265f
#endif
namespace ofxPennerEasing
{
class Sine
{
public:
    static float easeIn(float t, float b , float c, float d)
    {
        return -c * cos(t / d * (PI / 2)) + c + b;
    }

    static float easeOut(float t, float b , float c, float d)
    {
        return c * sin(t / d * (PI / 2)) + b;
    }

    static float easeInOut(float t, float b , float c, float d)
    {
        return -c / 2 * (cos(PI * t / d) - 1) + b;
    }
};
}
#endif
