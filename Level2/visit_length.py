def solution(dirs):
    dir ={'L':(-1, 0), 'R':(1, 0), 'U':(0, -1), 'D':(0, 1)}
    nowx, nowy = 0, 0
    visit = set()
    answer=0
    for d in dirs:
        x, y = dir[d]
        nextx = nowx+x
        nexty = nowy +y
        if nextx<-5 or nexty <-5 or nextx>5 or nexty>5:
            continue
        if(nowx, nowy, nextx, nexty) not in visit:
            visit.add((nowx, nowy, nextx, nexty))
            visit.add((nextx, nexty, nowx, nowy))
            answer+=1
        nowx, nowy = nextx, nexty
    return answer
