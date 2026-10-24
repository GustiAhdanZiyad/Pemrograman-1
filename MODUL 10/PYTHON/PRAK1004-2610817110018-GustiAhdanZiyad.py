def hanoi_steps(n):
    if n == 0:
        return 0
    return 2 * hanoi_steps(n - 1) + 1


n = int(input())

print("Jumlah langkah minimum untuk " + str(n) + " cakram adalah " + str(hanoi_steps(n)))
