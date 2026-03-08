#include "grid_alignment_consts.hpp"
#include "grid_alignment_node.hpp"

#include "ease_batch/ease.hpp"

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/print_string.hpp>
#include <godot_cpp/variant/string.hpp>

using namespace godot;

namespace GridAlignment {

void GridCube::_bind_methods() {
	BIND_CONSTANT(GRID_WIDTH);
	BIND_CONSTANT(GRID_DEPTH);

	BIND_CONSTANT(CELL_WIDTH);
	BIND_CONSTANT(CELL_DEPTH);

	BIND_CONSTANT(GRID_CELL_SLICE);
	BIND_CONSTANT(GRID_CELL_COUNT);

	BIND_CONSTANT(CUBE_CELL_COUNT);
	BIND_CONSTANT(CUBE_CELL_SLICE);

	String range_hint = "";

	ClassDB::bind_method(D_METHOD("set_current_layer", "value"), &GridCube::set_current_layer);
	ClassDB::bind_method(D_METHOD("get_current_layer"), &GridCube::get_current_layer);

	range_hint = "0," + String::num(GRID_DEPTH);
	ADD_PROPERTY(PropertyInfo(Variant::INT, "current_layer", PROPERTY_HINT_RANGE, range_hint),
			"set_current_layer", "get_current_layer");

	ClassDB::bind_method(D_METHOD("set_speed", "value"), &GridCube::set_speed);
	ClassDB::bind_method(D_METHOD("get_speed"), &GridCube::get_speed);

	range_hint = "0, 100";
	ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "speed", PROPERTY_HINT_RANGE, range_hint),
			"set_speed", "get_speed");

	BIND_EASE_CONSTANT(Linear);
	BIND_EASE_CONSTANT(InQuad);
	BIND_EASE_CONSTANT(OutQuad);
	BIND_EASE_CONSTANT(InOutQuad);

	ClassDB::bind_method(D_METHOD("set_ease", "ease"), &GridCube::set_ease);
	ClassDB::bind_method(D_METHOD("get_ease"), &GridCube::get_ease);

	ADD_PROPERTY(PropertyInfo(Variant::INT, "ease", PROPERTY_HINT_ENUM, "Linear, InQuad, OutQuad, InOutQuad"),
			"set_ease", "get_ease");
}

} //namespace GridAlignment
