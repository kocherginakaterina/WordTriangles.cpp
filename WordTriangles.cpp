#include <iostream>
#include <string>
#include <vector>
#include <random>

std::vector<std::string> words = { "word1", "word2", "word3", "word4", "word5" };
std::random_device rd;
std::mt19937 rng(rd());

void printTriangle(int size, bool isFlipped) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            std::cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            if (isFlipped) {
                std::cout << words[(size - i - 1 + j) % words.size()] << " ";
            } else {
                std::cout << words[(i + j) % words.size()] << " ";
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    std::cout << "Enter the number of word triangles to generate: ";
    int numTriangles;
    std::cin >> numTriangles;

    std::cout << "Enter the size of each triangle: ";
    int size;
    std::cin >> size;

    for (
