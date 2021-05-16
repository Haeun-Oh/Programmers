def solution(arr, divisor):
    arr.sort()
    answer = [x for x in arr if x%divisor==0]
    if len(answer)>0:
        return answer
    else:
        return [-1] 
