#pragma once

#include <godot_cpp/core/print_string.hpp>
#include <godot_cpp/classes/wrapped.hpp>
#include <godot_cpp/classes/node.hpp>

class GridAlignment : public godot::Node {
    GDCLASS(GridAlignment, godot::Node)

    static constexpr int GRID_WIDTH = 15;
    static constexpr int GRID_SLICE = GRID_WIDTH * GRID_WIDTH;

    static constexpr float CELL_WIDTH = 2.0f;
    static constexpr float CELL_DEPTH = 3.0f;

    static constexpr int GRID_DEPTH = 
	    static_cast<int>(GRID_WIDTH * CELL_WIDTH / CELL_DEPTH);

    static constexpr int CELL_COUNT = GRID_SLICE * GRID_DEPTH;

protected:
    static void _bind_methods();

public:
    GridAlignment() {
        godot::print_line("Hello World!");
    }
};
