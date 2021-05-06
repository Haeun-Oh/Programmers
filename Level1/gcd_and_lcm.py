def func(a, b):
    if a%b==0:
        return b
    else:
        return func(b, a%b)
def solution(n, m):
    min_num = func(n, m)
    return [min_num, n*m/min_num]
