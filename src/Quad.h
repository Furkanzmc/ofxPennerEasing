#ifndef _PENNER_QUAD
#define _PENNER_QUAD

namespace ofxPennerEasing
{
class Quad
{
public:
    static float easeIn(float t, float b , float c, float d)
    {
        return c * (t /= d) * t + b;
    }

    static float easeOut(float t, float b , float c, float d)
    {
        return -c * (t /= d) * (t - 2) + b;
    }

    static float easeInOut(float t, float b , float c, float d)
    {
        if ((t /= d / 2) < 1) return ((c / 2) * (t * t)) + b;
        return -c / 2 * (((t - 2) * (--t)) - 1) + b;
        /*
        originally return -c/2 * (((t-2)*(--t)) - 1) + b;

        I've had to swap (--t)*(t-2) due to diffence in behaviour in
        pre-increment operators between java and c++, after hours
        of joy
        */

    }
};
}

#endif
