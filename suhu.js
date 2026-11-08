const suhu = [-3, 5, 0, -12, 8, 15, -1, 22];


const target = 0;
const index = suhu.indexOf(target);

if (index !== -1) {
    console.log(`Nilai ${target} ditemukan pada index ke-${index}`);
} else {
    console.log(`Nilai ${target} tidak ditemukan`);
}


const suhuPositif = suhu.filter(s => s > 0);

console.log("Daftar suhu positif:", suhuPositif);