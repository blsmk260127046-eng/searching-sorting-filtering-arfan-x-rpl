suhu = [-3, 5, 0, -12, 8, 15, -1, 22]


target = 0

if target in suhu:
    index = suhu.index(target)
    print(f"Nilai {target} ditemukan pada index ke-{index}")
else:
    print(f"Nilai {target} tidak ditemukan")


suhu_positif = [s for s in suhu if s > 0]

print("Daftar suhu positif:", suhu_positif)