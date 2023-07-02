def bubble_sort(numbers):
    n = len(numbers)

    for ordered_elements in range(n - 1):
        for item in range(0, n - 1 - ordered_elements):
            if numbers[item] > numbers[item + 1]:
                numbers[item], numbers[item + 1] = numbers[item + 1], numbers[item]
                                
                # Lembra da troca com desempacotamento?
                # numbers[item], numbers[item + 1] = numbers[item + 1], numbers[item] equivale :
                """ current_element = numbers[item]
                numbers[item] = numbers[item + 1]
                numbers[item + 1] = current_element """
    return numbers

numbers = [7, 5, 9, 2, 6, 8]
print(f"Lista inicial: {numbers}")
ordered_numbers = bubble_sort(numbers)
print(f"Lista final: {ordered_numbers}")