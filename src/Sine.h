#ifndef _PENNER_SINE
#define _PENNER_SINE

#include <math.h>

#ifndef PI
#define PI  3.14159265f
#endif
namespace ofxPennerEasing
{
class Sine;
}

class ofxPennerEasing::Sine
{
public:
    static float easeIn(float t, float b , float c, float d);
    static float easeOut(float t, float b , float c, float d);
    static float easeInOut(float t, float b , float c, float d);
};

#endif
