#pragma once

#include "Back.h"
#include "Bounce.h"
#include "Circ.h"
#include "Cubic.h"
#include "Elastic.h"
#include "Expo.h"
#include "Linear.h"
#include "Quad.h"
#include "Quart.h"
#include "Quint.h"
#include "Sine.h"

enum class PENNER_EASING : unsigned int {
    BACK_IN = 0,
    BACK_OUT,
    BACK_IN_OUT,

    BOUNCE_IN,
    BOUNCE_OUT,
    BOUNCE_IN_OUT,

    CIRC_IN,
    CIRC_OUT,
    CIRC_IN_OUT,

    CUBIC_IN,
    CUBIC_OUT,
    CUBIC_IN_OUT,

    ELASTIC_IN,
    ELASTIC_OUT,
    ELASTIC_IN_OUT,

    EXPO_IN,
    EXPO_OUT,
    EXPO_IN_OUT,

    LINEAR,

    QUAD_IN,
    QUAD_OUT,
    QUAD_IN_OUT,

    QUART_IN,
    QUART_OUT,
    QUART_IN_OUT,

    QUINT_IN,
    QUINT_OUT,
    QUINT_IN_OUT,

    SINE_IN,
    SINE_OUT,
    SINE_IN_OUT
};
