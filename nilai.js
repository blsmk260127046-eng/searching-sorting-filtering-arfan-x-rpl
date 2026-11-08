const nilai = [60, 85, 40, 90, 75, 50, 95];


const target = 85;
const index = nilai.indexOf(target);

if (index !== -1) {
    console.log(`Nilai ${target} ditemukan pada index ke-${index}`);
} else {
    console.log(`Nilai ${target} tidak ditemukan`);
}


const nilaiLulus = nilai.filter(n => n >= 75);

console.log("Daftar nilai yang lulus:", nilaiLulus);