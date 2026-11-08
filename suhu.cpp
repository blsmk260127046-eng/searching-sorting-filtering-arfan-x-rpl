#include <iostream>
#include <vector>

int main() {
    std::vector<int> suhu = {-3, 5, 0, -12, 8, 15, -1, 22};


    int target = 0;
    int index = -1;

    for (size_t i = 0; i < suhu.size(); i++) {
        if (suhu[i] == target) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        std::cout << "Nilai " << target << " ditemukan pada index ke-" << index << std::endl;
    } else {
        std::cout << "Nilai " << target << " tidak ditemukan" << std::endl;
    }

    
    std::vector<int> suhuPositif;
    for (int s : suhu) {
        if (s > 0) {
            suhuPositif.push_back(s);
        }
    }

    std::cout << "Daftar suhu positif: ";
    for (int s : suhuPositif) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    return 0;
}