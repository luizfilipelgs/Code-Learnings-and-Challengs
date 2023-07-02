import random
def sum_num_max_digit(max_digit: int):
    num = []
    sum = 0
    length_digit = 4

    for i in range(length_digit):
        digit = random.randint(1, max_digit)
        num.append(digit)
        sum += digit

    total_digit = ''.join(map(str, num))
    
    if sum == 21: return total_digit
    return sum_num_max_digit(max_digit)

print(sum_num_max_digit(6))