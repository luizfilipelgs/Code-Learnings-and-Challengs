def binary_search(numbers, target):
    start = 0
    end = len(numbers) - 1
    inter = 0

    while start <= end:
        mid = (start + end) // 2

        if numbers[mid] == target:
            return {
                'posição': mid,
                'interações': inter +1
            }
        
        if target < numbers[mid]:
            end = mid - 1
            inter += 1
            
        else:
            start = mid + 1
            inter += 1
    
    return {
                'posição': -1,
                'interações': inter +1
            }

numbers = [2, 3, 4, 10, 40, 50, 77, 99, 109, 200]
target = 51

result = binary_search(numbers, target)

if result['posição'] == -1:
    print('elemento não encontrado')
else:
    print(f"Elemento encontrado na posição: {result['posição']}, com {result['interações']} interações")