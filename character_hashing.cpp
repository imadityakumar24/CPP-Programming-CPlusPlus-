#include <iostream>

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    int freq[256] = {0}; // Array to store character frequencies (supports all ASCII characters)

    // Count frequency of each character
    for (char ch : input) {
        freq[ch]++;
    }

    std::cout << "Character Frequencies:\n";
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            std::cout << (char)i << " -> " << freq[i] << std::endl;
        }
    }

    return 0;
}
