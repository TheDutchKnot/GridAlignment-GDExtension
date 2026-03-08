#pragma once

#include "grid_alignment_consts.hpp"

#include "ease_batch/ease.hpp"
#include "ease_batch/ease_batch.hpp"

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/wrapped.hpp>

namespace GridAlignment {
class GridCube : public godot::Node {
	GDCLASS(GridCube, godot::Node)

public:
	void _process(const real_t delta);

	void set_current_layer(const int value);
	const int get_current_layer() const { return current_layer; }

	const int get_ease() const { return to_int(ease); }
	void set_ease(const int value) { ease = from_int(value); }

	const float get_speed() const { return speed; }
	void set_speed(const float value) { speed = value; }

protected:
	static void _bind_methods();

private:
	EaseBatch column_heights{ CUBE_CELL_SLICE };
	Ease ease = Ease::Linear;
	float speed = 1.0f;

	bool is_running = false;
	real_t elapsed = 0.0f;
	float distance = 0.0f;
	int current_layer = 0;
};
} //namespace GridAlignment
