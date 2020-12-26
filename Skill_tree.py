def solution(skill, skill_trees):
    answer = 0
    
    for i in skill_trees:
        vec=''#문자열로
        for j in i:
            if j in skill:
                vec+=j
        if(vec==skill[:len(vec)]):#
            answer+=1
    return answer
