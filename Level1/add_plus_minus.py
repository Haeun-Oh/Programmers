def solution(absolutes, signs):
    answer = 0
    for num, op in zip(absolutes, signs):
        if op:
            answer+=num
        else:
            answer-=num
    return answer
