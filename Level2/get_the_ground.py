def solution(land):
    dp = [[0 for col in range(4)]for row in range(len(land))]
    for i in range(4):
        dp[len(land)-1][i] = land[len(land)-1][i]
    
    for i in range(len(land)-2,-1, -1):
        for j in range(4):
            for k in range(4):
                if k!=j:
                    dp[i][j] = max(dp[i][j], dp[i+1][k] + land[i][j])
    return max(dp[0])
