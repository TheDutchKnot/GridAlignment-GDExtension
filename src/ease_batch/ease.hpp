#pragma once

enum Ease {
    Linear,
    
    InQuad,
    OutQuad,
    InOutQuad
};

float evaluate(const Ease ease, const float t);
