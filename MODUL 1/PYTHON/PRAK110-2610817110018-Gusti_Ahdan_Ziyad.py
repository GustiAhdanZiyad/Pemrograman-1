import math

base = 5
height = 12
side = int(math.sqrt((base * base) + (height * height)))
perimeter = base + height + side
area = int((base * height) / 2)

print("Diketahui :")
print(f"Alas = {base} cm")
print(f"Tinggi = {height} cm\n")
print("Jawab :")
print(f"Sisi A = {base} cm")
print(f"Sisi B = {side} cm")
print(f"Sisi C = {height} cm")
print(f"Keliling = {perimeter} cm")
print(f"Luas = {area} cm")