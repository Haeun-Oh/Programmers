def solution(new_id):
    new_id = new_id.lower()
    second_new_id=""
    for s in new_id:
        if s.isalpha() or s.isdigit() or s in ['-', '_', '.']:
            second_new_id += s
    cnt=0
    third_new_id = ""
    for s in second_new_id:
        if s=='.':
            cnt+=1
        else:
            if cnt:
                third_new_id+="."
                cnt=0
            third_new_id+=s
    third_new_id = third_new_id.strip('.')
    if third_new_id =="":
        third_new_id = "a"
    if len(third_new_id)>=16:
        third_new_id = third_new_id[:15]
        third_new_id = third_new_id.rstrip('.')
    while len(third_new_id)<3:
        third_new_id+=third_new_id[-1]
    return third_new_id
