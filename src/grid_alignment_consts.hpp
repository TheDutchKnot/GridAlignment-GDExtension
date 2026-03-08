#pragma once

#include "grid_alignment_face.hpp"

namespace GridAlignment {
inline constexpr int GRID_WIDTH = 15;

inline constexpr float CELL_WIDTH = 2.0f;
inline constexpr float CELL_DEPTH = 3.0f;

inline constexpr int GRID_DEPTH =
		static_cast<int>(GRID_WIDTH * CELL_WIDTH / CELL_DEPTH);

inline constexpr int GRID_CELL_SLICE = GRID_WIDTH * GRID_WIDTH;
inline constexpr int GRID_CELL_COUNT = GRID_WIDTH * GRID_WIDTH * GRID_DEPTH;

inline constexpr int CUBE_CELL_COUNT = all_axes.size() * GRID_CELL_COUNT;
inline constexpr int CUBE_CELL_SLICE = all_axes.size() * GRID_CELL_SLICE;

} //namespace GridAlignment
