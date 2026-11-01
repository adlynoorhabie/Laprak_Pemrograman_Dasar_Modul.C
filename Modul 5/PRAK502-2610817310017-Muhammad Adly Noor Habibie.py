def count(grade1, grade2):
    return grade1 - grade2

def main():
    a, c, b, d = input().split()
    a = int(a)
    b = int(b)
    c = int(c)
    d = int(d)

    result = abs(count(a, b)) + abs(count(c, d))
    
    print(result)

main()