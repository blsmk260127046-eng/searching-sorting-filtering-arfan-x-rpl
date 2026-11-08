const produk = ["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"];


const target = "Keyboard";
const index = produk.indexOf(target);

if (index !== -1) {
    console.log(`Produk "${target}" ditemukan pada index ke-${index}`);
} else {
    console.log(`Produk "${target}" tidak ditemukan`);
}


const produkPanjang = produk.filter(p => p.length > 5);

console.log("Produk dengan nama lebih dari 5 karakter:", produkPanjang);