depan = input("Nama Depan: ").strip()
belakang = input("Nama Belakang: ").strip()

lengkap = f"{depan} {belakang}"
panjang_tanpa_spasi = len(lengkap.replace(" ", ""))

print(f"Nama Lengkap : {lengkap}")
print(f"Panjang Nama (tanpa spasi): {panjang_tanpa_spasi}")