baris, kolom = map(int, input().split())
elemen = list(map(int, input().split()))
matriks = [elemen[i * kolom:(i + 1) * kolom] for i in range(baris)]
for b in matriks:
    print(*(b))