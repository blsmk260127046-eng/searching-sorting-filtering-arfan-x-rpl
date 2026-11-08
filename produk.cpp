#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> produk = {"Laptop", "Mouse", "Keyboard", "Monitor", "Headset"};

  
    std::string target = "Keyboard";
    int index = -1;

    for (size_t i = 0; i < produk.size(); i++) {
        if (produk[i] == target) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        std::cout << "Produk \"" << target << "\" ditemukan pada index ke-" << index << std::endl;
    } else {
        std::cout << "Produk \"" << target << "\" tidak ditemukan" << std::endl;
    }

    
    std::vector<std::string> produkPanjang;
    for (const std::string& p : produk) {
        if (p.length() > 5) {
            produkPanjang.push_back(p);
        }
    }

    std::cout << "Produk dengan nama lebih dari 5 karakter: ";
    for (const std::string& p : produkPanjang) {
        std::cout << p << " ";
    }
    std::cout << std::endl;

    return 0;
}