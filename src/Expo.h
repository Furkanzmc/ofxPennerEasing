#ifndef _PENNER_EXPO
#define _PENNER_EXPO
#include <math.h>

namespace ofxPennerEasing
{
class Expo
{
public:
    static float easeIn(float t, float b , float c, float d)
    {
        return (t == 0) ? b : c * pow(2, 10 * (t / d - 1)) + b;
    }

    static float easeOut(float t, float b , float c, float d)
    {
        return (t == d) ? b + c : c * (-pow(2, -10 * t / d) + 1) + b;
    }

    static float easeInOut(float t, float b , float c, float d)
    {
        if (t == 0) return b;
        if (t == d) return b + c;
        if ((t /= d / 2) < 1) return c / 2 * pow(2, 10 * (t - 1)) + b;
        return c / 2 * (-pow(2, -10 * --t) + 2) + b;
    }
};
}

#endif
