#include "ease.hpp"

namespace GridAlignment {

float evaluate(const Ease ease, const float t) {
	switch (ease) {
		case Ease::InQuad:
			return t * t;

		case Ease::OutQuad:
			return t * (2.0f - t);

		case Ease::InOutQuad:
			if (t < 0.5f)
				return 2.0f * t * t;
			else
				return -1.0f + (4.0f - 2.0f * t) * t;

		default:
			return t;
	}
}

} //namespace GridAlignment
