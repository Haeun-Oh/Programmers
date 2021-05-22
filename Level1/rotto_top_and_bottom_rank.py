def solution(lottos, win_nums):
    correct=0
    ans = [6, 6, 5, 4, 3, 2, 1]
    zeros = lottos.count(0)
    for l in lottos:
        if l in win_nums:
            correct+=1
    return [ans[correct+zeros], ans[correct]]
