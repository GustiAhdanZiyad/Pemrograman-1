kalimat = input("Kalimat: ").lower()
vokal = 0
konsonan = 0
for c in kalimat:
    if c.isalpha():
        if c in "aiueo":
            vokal += 1
        else:
            konsonan += 1

print(f"Jumlah Vokal: {vokal}")
print(f"Jumlah Konsonan: {konsonan}")