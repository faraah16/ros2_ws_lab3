# GetFleetStatus.srv
# Service to query current fleet status

# ============================================
# REQUEST - What information to include
# ============================================
bool include_offline_robots            # Include robots not currently reporting?
string robot_type_filter               # Filter by type (empty = all)

