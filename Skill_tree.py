def solution(skill, skill_trees):
    answer = 0
    
    for i in skill_trees:
        vec=[]
        chk=True
        for j in range(0, len(i)):
            if i[j] in skill:
                vec.append(i[j])
        k=0
        while(k!=len(vec)):
            if skill[k] != vec[k]:
                chk=False
                break
            k+=1
        if chk==True:
            answer+=1
    return answer
