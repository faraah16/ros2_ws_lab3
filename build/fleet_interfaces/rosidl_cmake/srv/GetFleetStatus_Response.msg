

# ============================================
# RESPONSE - Fleet statistics
# ============================================
uint32 total_robots                    # Total number of robots
uint32 operational_robots              # How many are working properly
uint32 robots_on_task                  # Currently executing tasks
uint32 robots_charging                 # Currently charging
uint32 robots_with_errors              # Have critical errors
string[] robot_ids                     # List of all robot IDs
float32 average_battery_level          # Fleet average battery %