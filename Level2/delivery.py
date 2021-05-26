from heapq import *
import math

def solution(N, road, K):
    answer = 0
    dist = [0] + [math.inf for i in range(1, N)]
    
    node = [[]for _ in range(N)]
    for a, b, c in road:
        node[a-1].append((b-1, c))
        node[b-1].append((a-1, c))
        
    pq = []
    heappush(pq, (0, 0))
    while pq:
        nowdist, now = heappop(pq)
        if dist[now]<nowdist:
            continue
        for next_node in node[now]:
            if dist[next_node[0]] > nowdist + next_node[1]:
                dist[next_node[0]] = nowdist + next_node[1]
                heappush(pq, (dist[next_node[0]], next_node[0]))
                
    for i in dist:
        if i <=K:
            answer+=1
    return answer
