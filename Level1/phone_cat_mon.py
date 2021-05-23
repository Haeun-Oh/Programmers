def solution(nums):
    n = len(nums)/2
    set_nums = list(set(nums))
    if len(set_nums)>=n:
        return n
    else:
        return len(set_nums)
