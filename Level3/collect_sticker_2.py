def solution(sticker):
    if(len(sticker)==1):
        return sticker[0]
    dp1 = [0]*len(sticker)
    dp2 = [0]*len(sticker)
    
    # 첫번째 스티커를 뜯은 경우
    dp1[0] = sticker[0]
    dp1[1] = dp1[0]
    for i in range(2, len(sticker)-1):
        dp1[i] = max(dp1[i-1], dp1[i-2]+ sticker[i])
    # 최댓값: dp1[n-2]    
    
    # 첫번째 스티커를 뜯지 않은 경우
    dp2[0] = 0
    dp2[1] = sticker[1]
    for i in range(2, len(sticker)):
        dp2[i] = max(dp2[i-1], dp2[i-2]+ sticker[i])
    # 최댓값: dp2[n-1]
    
    return max(dp1[len(sticker)-2], dp2[len(sticker)-1])