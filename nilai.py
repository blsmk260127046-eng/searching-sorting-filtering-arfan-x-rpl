nilai = [60, 85, 40, 90, 75, 50, 95]


target = 85

if target in nilai:
    index = nilai.index(target)
    print(f"Nilai {target} ditemukan pada index ke-{index}")
else:
    print(f"Nilai {target} tidak ditemukan")


nilai_lulus = [n for n in nilai if n >= 75]

print("Daftar nilai yang lulus:", nilai_lulus)