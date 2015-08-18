#ifndef _PENNER_LINEAR
#define _PENNER_LINEAR

namespace ofxPennerEasing
{
class Linear
{
public:
    static float ease(float t, float b , float c, float d)
    {
        return c * t / d + b;
    }
};
}

#endif
