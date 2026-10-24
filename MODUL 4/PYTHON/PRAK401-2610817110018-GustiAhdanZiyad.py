multiples, symbol = input().split()
multiples = int(multiples)

for i in range(1, 51):
    if i % multiples == 0:
        print(symbol, end=" ")
    else:
        print(i, end=" ")
print()