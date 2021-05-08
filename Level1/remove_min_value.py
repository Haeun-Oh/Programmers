def solution(arr):
	a = min(arr)
	answer = [i for i in arr if i > a]
	return answer if len(answer) > 0 else [-1]
