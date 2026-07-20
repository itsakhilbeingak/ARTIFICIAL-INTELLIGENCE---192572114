# Graph
graph = {
    'A': [('B', 1), ('C', 4)],
    'B': [('D', 2)],
    'C': [('D', 1)],
    'D': []
}

# Heuristic values
h = {
    'A': 3,
    'B': 2,
    'C': 1,
    'D': 0
}

start = 'A'
goal = 'D'

open_list = [(start, 0)]  # (node, g_cost)
visited = []

while open_list:

    # Select node with minimum f = g + h
    current, g = min(open_list, key=lambda x: x[1] + h[x[0]])
    open_list.remove((current, g))

    print("Visiting:", current)

    if current == goal:
        print("Goal Reached!")
        break

    visited.append(current)

    for neighbor, cost in graph[current]:
        if neighbor not in visited:
            open_list.append((neighbor, g + cost))
