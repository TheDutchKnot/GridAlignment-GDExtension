#pragma once

#include <algorithm>
#include <vector>

namespace GridAlignment {

class EaseBatch {
public:
	std::vector<float> Origins;
	std::vector<float> Targets;
	std::vector<float> Current;

	explicit EaseBatch(size_t size) :
			Origins(size),
			Targets(size),
			Current(size) {}

	size_t size() const {
		return Current.size();
	}

	void lerp(const float factor) {
		for (size_t i = 0; i < Current.size(); ++i) {
			Current[i] = Origins[i] + (Targets[i] - Origins[i]) * factor;
		}
	}

	void swap_buffers() {
		std::swap(Origins, Current);
	}
};

} //namespace GridAlignment
