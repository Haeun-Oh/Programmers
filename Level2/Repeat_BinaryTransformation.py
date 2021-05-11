def solution(s):
    cnt_digit=0
    cnt_zero=0
    while True:
        ns=""
        if s=='1':
            return [cnt_digit, cnt_zero]
        for c in s:
            if c=="0":
                cnt_zero+=1
            else:
                ns+=c
        num = len(ns)
        cnt_digit+=1
        s=""
        while num:
            s = str(num%2) + s
            num = num//2
