from queue import PriorityQueue

# Graph representation
graph = {
    'A': [('B', 4), ('C', 3)],
    'B': [('D', 5), ('E', 12)],
    'C': [('E', 10)],
    'D': [('G', 7)],
    'E': [('G', 2)],
    'G': []
}

# Heuristic values (estimated distance to Goal G)
heuristic = {
    'A': 10,
    'B': 8,
    'C': 7,
    'D': 4,
    'E': 2,
    'G': 0
}

def astar(start, goal):
    open_list = PriorityQueue()
    open_list.put((0, start))

    g_cost = {start: 0}
    parent = {start: None}

    while not open_list.empty():
        current = open_list.get()[1]

        if current == goal:
            path = []
            while current:
                path.append(current)
                current = parent[current]
            return path[::-1]

        for neighbor, cost in graph[current]:
            new_g = g_cost[current] + cost

            if neighbor not in g_cost or new_g < g_cost[neighbor]:
                g_cost[neighbor] = new_g
                f_cost = new_g + heuristic[neighbor]

                open_list.put((f_cost, neighbor))
                parent[neighbor] = current

    return None

# Run A*
path = astar('A', 'G')

print("Shortest Path:", " -> ".join(path))
