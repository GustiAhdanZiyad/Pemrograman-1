def fibonacci(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    return fibonacci(n - 1) + fibonacci(n - 2)


n = int(input())

i = 0
while i < n:
    if i > 0:
        print(" ", end="")
    print(fibonacci(i), end="")
    i = i + 1
print()
