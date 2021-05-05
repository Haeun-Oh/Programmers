def solution(A,B):
    return sum([a*b for a, b, in zip(sorted(A, reverse=True), sorted(B))])
