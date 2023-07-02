def linear_search(numbers, target):
    n = len(numbers)
    for index in range(0, n):
        if numbers[index] == target:
            return index

    return "elemento não encontrado" 


print(linear_search([1, 2, 3], 3))
print(linear_search([1, 2, 3], 4))