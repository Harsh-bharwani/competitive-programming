#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";
    std::string from = "World";
    std::string to = "C++";

    size_t start_pos = str.find(from);
    if (start_pos != std::string::npos) {
        str.replace(start_pos, from.length(), to);
    }

    std::cout << str << std::endl; // Output: Hello, C++!
    return 0;
}
