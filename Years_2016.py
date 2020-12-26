def solution(a, b):
    answer = ''
    li = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    week = ["THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"]
    num=0
    for i in range(a-1):
        num+=li[i]
    num+=b
    answer = week[num%7]
        
    return answer
