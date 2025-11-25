# AssignTask.srv
# Service to assign a task to a specific robot

# ============================================
# REQUEST - What task to assign
# ============================================
string robot_id                        # Which robot to assign to
string task_id                         # Unique task identifier
string task_type                       # "delivery", "patrol", "cleaning"
geometry_msgs/Point[] waypoints        # Path to follow
float32 max_velocity                   # Speed limit for this task
float32 estimated_duration             # Expected time (seconds)
string[] required_capabilities         # Robot must have these (e.g., ["gripper", "camera"])

