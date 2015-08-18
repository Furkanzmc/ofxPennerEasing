#ifndef _PENNER_ELASTIC
#define _PENNER_ELASTIC

#include <math.h>

#ifndef PI
#define PI  3.14159265f
#endif

namespace ofxPennerEasing
{
class Elastic
{
public:
    static float easeIn(float t, float b , float c, float d)
    {
        if (t == 0) return b;
        if ((t /= d) == 1) return b + c;
        float p = d * .3f;
        float a = c;
        float s = p / 4;
        float postFix = a * pow(2, 10 * (t -= 1)); // this is a fix, again, with post-increment operators
        return -(postFix * sin((t * d - s) * (2 * PI) / p)) + b;
    }

    static float easeOut(float t, float b , float c, float d)
    {
        if (t == 0) return b;
        if ((t /= d) == 1) return b + c;
        float p = d * .3f;
        float a = c;
        float s = p / 4;
        return (a * pow(2, -10 * t) * sin((t * d - s) * (2 * PI) / p) + c + b);
    }

    static float easeInOut(float t, float b , float c, float d)
    {
        if (t == 0) return b;
        if ((t /= d / 2) == 2) return b + c;
        float p = d * (.3f * 1.5f);
        float a = c;
        float s = p / 4;

        if (t < 1) {
            float postFix = a * pow(2, 10 * (t -= 1)); // postIncrement is evil
            return -.5f * (postFix * sin((t * d - s) * (2 * PI) / p)) + b;
        }
        float postFix =  a * pow(2, -10 * (t -= 1)); // postIncrement is evil
        return postFix * sin((t * d - s) * (2 * PI) / p) * .5f + c + b;
    }
};
}

#endif
