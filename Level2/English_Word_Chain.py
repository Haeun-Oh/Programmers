def solution(n, words):
    answer = [0, 0]
    li = [words[0]]
    for i in range(1,len(words)):
        if words[i] in li or words[i-1][-1]!=words[i][0] :
            return [i%n+1, i//n+1]
        else:
            li.append(words[i])
    return answer
