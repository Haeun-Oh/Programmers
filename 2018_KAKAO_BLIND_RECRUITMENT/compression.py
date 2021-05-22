def solution(msg):
    answer = []
    dir={}
    for i in range(26):
        dir[chr(65+i)]=i+1
    w, c = 0, 0
    while True:
        c += 1
        if c==len(msg):
            answer.append(dir[msg[w:c]])
            break
        if msg[w:c+1] not in dir:
            dir[msg[w:c+1]]=len(dir)+1
            answer.append(dir[msg[w:c]])
            w=c
    return answer
