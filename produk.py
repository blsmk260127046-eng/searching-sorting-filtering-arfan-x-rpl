produk = ["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"]


target = "Keyboard"

if target in produk:
    index = produk.index(target)
    print(f'Produk "{target}" ditemukan pada index ke-{index}')
else:
    print(f'Produk "{target}" tidak ditemukan')


produk_panjang = [p for p in produk if len(p) > 5]

print("Produk dengan nama lebih dari 5 karakter:", produk_panjang)