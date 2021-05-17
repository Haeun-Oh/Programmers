def solution(d, budget):
    d.sort()
    answer=0
    for c in d:
        budget-=c
        if budget <0:
            break
        answer+=1
    return answer
