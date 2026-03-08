#pragma once

namespace GridAlignment {

#define BIND_EASE_CONSTANT(name) \
	ClassDB::bind_integer_constant(get_class_static(), "Ease", #name, (int)Ease::name);

enum Ease {
	Linear,

	InQuad,
	OutQuad,
	InOutQuad
};

inline constexpr Ease from_int(int ease) {
	return static_cast<Ease>(ease);
}

inline constexpr int to_int(Ease ease) {
	return static_cast<int>(ease);
}

float evaluate(const Ease ease, const float t);
} //namespace GridAlignment
