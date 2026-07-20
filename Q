from collections import deque

graph = {
    'A': ['B', 'C'],
    'B': ['D', 'E'],
    'C': ['F', 'G'],
    'D': [],
    'E': [],
    'F': [],
    'G': []
}

queue = deque(['A'])
visited = []

while queue:
    node = queue.popleft()

    if node not in visited:
        print(node, end=" ")
        visited.append(node)

        for neighbor in graph[node]:
            queue.append(neighbor)
