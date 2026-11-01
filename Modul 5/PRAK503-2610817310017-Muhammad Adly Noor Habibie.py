count = int(input())
values = list(map(int, input().split()))

maximum = max(values[:count])
minimum = min(values[:count])

print(maximum, minimum)