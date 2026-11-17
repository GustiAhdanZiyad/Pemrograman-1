import sys

kode = sys.stdin.readline().rstrip('\r\n')
pesan = sys.stdin.readline().rstrip('\r\n')

if len(kode) != len(pesan):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    bintang = 0
    pagar = 0
    hasil = []
    for k, p in zip(kode, pesan):
        if k == ' ' and p == ' ':
            hasil.append(' ')
        elif k == p:
            hasil.append('*')
            bintang += 1
        else:
            hasil.append('#')
            pagar += 1
    print("".join(hasil))
    print(f"*={bintang}")
    print(f"#={pagar}")
    if bintang >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")