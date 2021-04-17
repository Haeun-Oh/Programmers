def solution(arr1, arr2):
    return [[sum(element) for element in zip(*matrix)] for matrix in zip(arr1, arr2)]
