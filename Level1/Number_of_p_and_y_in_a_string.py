def solution(s):
    s = s.lower()
    cnt_p, cnt_y = 0, 0
    for c in s:
        if c=='p':
            cnt_p+=1
        elif c=='y':
            cnt_y+=1
    return True if cnt_p==cnt_y else False
