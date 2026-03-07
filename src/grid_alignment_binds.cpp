#include "grid_alignment_node.hpp"

#include <godot_cpp/core/class_db.hpp>

void GridAlignment:: _bind_methods() {
    BIND_CONSTANT(GRID_WIDTH);
    BIND_CONSTANT(GRID_DEPTH);
    
    BIND_CONSTANT(CELL_WIDTH);
    BIND_CONSTANT(CELL_DEPTH);

    BIND_CONSTANT(GRID_SLICE);
    BIND_CONSTANT(CELL_COUNT);
}
