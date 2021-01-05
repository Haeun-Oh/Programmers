def solution(s):
    str = s.split(" ")
    answer = []
    for e in str:
        tmp = ""
        for i, c in enumerate(e):
            if i % 2 == 0:
                tmp += c.upper()
            else:
                tmp += c.lower()
        answer.append(tmp)
    return " ".join(answer)
