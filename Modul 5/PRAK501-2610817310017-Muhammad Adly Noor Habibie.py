def MaxNumber(a, b, c, d):
    greatest_number = a

    if b > greatest_number:
        greatest_number = b

    if c > greatest_number:
        greatest_number = c

    if d > greatest_number:
        greatest_number = d

    return greatest_number


a, b, c, d = input().split()
a = int(a)
b = int(b)
c = int(c)
d = int(d)

result = MaxNumber(a, b, c, d)

print(result) 