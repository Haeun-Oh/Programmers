def solution(dirs):
    answer = 0
    nx, ny = 0, 0
    visit = []
    move = {'U':(0, 1), 'D': (0, -1), 'R': (1, 0), 'L':(-1, 0)}
    for d in dirs:
        x, y = move[d]
        if -5<=nx+x<=5 and -5<=ny+y<=5: 
            if (nx, ny, nx+x, ny+y) not in visit:
                visit.append((nx, ny, nx+x, ny+y))
                visit.append((nx+x, ny+y, nx, ny))
                answer+=1
            nx+=x
            ny+=y
    return answer
