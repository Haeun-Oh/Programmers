from itertools import combinations

def solution(nums):
    answer = 0
    comb = list(combinations(nums, 3))
    total = [sum(x) for x in comb]
    MAX = max(total)
    primes = [False, False] + [True]*(MAX-1)
    for i in range(2,int(MAX**0.5)+1):
        if primes[i]:
            for j in range(2*i, MAX+1, i):
                primes[j] = False
    for x in total:
        if primes[x]==True:
            answer+=1
    return answer
