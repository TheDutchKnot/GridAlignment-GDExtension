extends GridCube

@export var value: Test = Test.one;

enum Test {
	one,
	two
}

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	set_speed


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass
