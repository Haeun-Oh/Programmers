from collections import deque

def solution(maps):
    dx = [-1, 1, 0, 0]
    dy = [0, 0, -1, 1]
    que = deque()
    que.append((0,0, 1))
    maps[0][0]=0
    while que:
        y, x, cnt = que.popleft()
        for i in range(4):
            ny = y+dy[i]
            nx = x+dx[i]
            if ny==len(maps)-1 and nx == len(maps[0])-1:
                return cnt+1
            elif 0<=ny <len(maps) and 0<= nx < len(maps[0]) and maps[ny][nx]:
                maps[ny][nx] = 0
                que.append((ny, nx, cnt+1))
    return -1
