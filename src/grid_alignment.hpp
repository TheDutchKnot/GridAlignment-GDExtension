#pragma once

#include "godot_cpp/classes/wrapped.hpp"
#include <godot_cpp/classes/node.hpp>

class GridAlignment: public godot::Node{
    GDCLASS(GridAlignment, godot::Node);

protected:
    static void _bind_methods();

public: GridAlignment();
};
