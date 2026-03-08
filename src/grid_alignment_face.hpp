#pragma once

#include <array>
#include <cstdint>

namespace GridAlignment {

enum CubeFace : std::int8_t {
	None = 0, //< No direction

	X_Pos = 1, //< +X (Right)
	X_Neg = -1, //< -X (Left)

	Y_Pos = 2, //< +Y (Top)
	Y_Neg = -2, //< -Y (Bottom)

	Z_Pos = 3, //< +Z (Front)
	Z_Neg = -3 //< -Z (Back)
};

[[nodiscard]] inline constexpr CubeFace operator-(CubeFace dir) noexcept {
	return static_cast<CubeFace>(-static_cast<std::int8_t>(dir));
}

inline constexpr std::array<CubeFace, 6> all_axes = {
	CubeFace::X_Pos, CubeFace::X_Neg,
	CubeFace::Y_Pos, CubeFace::Y_Neg,
	CubeFace::Z_Pos, CubeFace::Z_Neg
};
} //namespace GridAlignment
