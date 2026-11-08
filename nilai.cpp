#include <iostream>
#include <vector>

int main() {
    std::vector<int> nilai = {60, 85, 40, 90, 75, 50, 95};

  
    int target = 85;
    int index = -1;

    for (int i = 0; i < nilai.size(); i++) {
        if (nilai[i] == target) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        std::cout << "Nilai " << target << " ditemukan pada index ke-" << index << std::endl;
    } else {
        std::cout << "Nilai " << target << " tidak ditemukan" << std::endl;
    }

   
    std::vector<int> nilaiLulus;
    for (int n : nilai) {
        if (n >= 75) {
            nilaiLulus.push_back(n);
        }
    }

    std::cout << "Daftar nilai yang lulus: ";
    for (int n : nilaiLulus) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}