def reverse_number(number):
    sign = -1 if number < 0 else 1
    number = abs(number)
    reversed_number = 0

    while number != 0:
        reversed_number = reversed_number * 10 + number % 10
        number //= 10

    return sign * reversed_number

A, B = input().split()

A = int(A)
B = int(B)

A = reverse_number(A)
B = reverse_number(B)

print(reverse_number(A + B))