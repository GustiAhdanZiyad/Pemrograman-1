import sys

try:
    n_line = input().strip()
    if not n_line:
        sys.exit()
    n = int(n_line)
except (EOFError, ValueError):
    sys.exit()

numbers = []
target_count = 2 * n * n  

while len(numbers) < target_count:
    try:
        line = input().strip()
    except EOFError:
        break
    if not line:
        continue
    
    parts = line.split()
    for p in parts:
        try:
            numbers.append(int(p))
        except ValueError:
            pass

A_flat = numbers[:n*n]
B_flat = numbers[n*n : 2*n*n]

A = [A_flat[i * n : (i + 1) * n] for i in range(n)]
B = [B_flat[i * n : (i + 1) * n] for i in range(n)]

C = [[sum(A[i][k] * B[k][j] for k in range(n)) for j in range(n)] for i in range(n)]

print("Matriks AXB")
for baris in C:
    print(*(baris))