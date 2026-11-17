kata = input().strip().lower()
if kata == kata[::-1]:
    print(f"Kata '{kata}' adalah palindrom")
else:
    print(f"Kata '{kata}' bukan palindrom")