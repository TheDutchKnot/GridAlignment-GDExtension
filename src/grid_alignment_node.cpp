#include "grid_alignment_node.hpp"
#include "grid_alignment_consts.hpp"

#include "ease_batch/ease.hpp"

#include <godot_cpp/core/math.hpp>

using namespace godot;

namespace GridAlignment {

void GridCube::set_current_layer(const int value) {
	distance = Math::abs(current_layer - value) * CELL_DEPTH;
	column_heights.swap_buffers();
	current_layer = value;
	is_running = true;
	elapsed = 0;
}

void GridCube::_process(const real_t delta) {
	if (is_running) {
		elapsed += speed * delta;

		float normalizedTime = Math::clamp(elapsed / distance, 0.0f, 1.0f);

		column_heights.lerp(evaluate(ease, normalizedTime));

		if (normalizedTime >= 0.0f)
			is_running = false;

	} else {
		//Logic for detecting and using set_current_layer
	}
	//Logic for culling the scene
}
} //namespace GridAlignment
