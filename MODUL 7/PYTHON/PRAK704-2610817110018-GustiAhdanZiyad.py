import sys


deskripsi = input().strip()

if len(deskripsi) > 20:
    print(deskripsi[:20] + "...")
else:
    print(deskripsi)