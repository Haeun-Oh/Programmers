def divide(w):
    openw = 0
    closew = 0
    for i in range(len(w)):
        if w[i]== '(':
            openw+=1
        else:
            closew+=1
        if openw == closew:
            return w[:i+1], w[i+1:]
        
def right_string(w):
    s = []
    for c in w:
        if c=='(':
            s.append(c)
        else:
            if s==[]:
                return False
            s.pop()
    return True
    
def solution(p):
    # 1
    if p == "": 
        return ""
    
    # 2
    u, v = divide(p)
    
    # 3
    if right_string(u):
        return u+solution(v)
    
    # 4
    else:
        ans = '('
        ans +=solution(v)
        ans+=')'
        for c in u[1:-1]:
            if c=='(':
                ans+=')'
            else:
                ans+='('
        return ans
