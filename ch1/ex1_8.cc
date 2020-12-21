#include <iostream>

int main() {
    std::cout << "/*";
    std::cout << "*/";
    std::cout << /* "*/" */";
    std::cout << /* "*/" /* "/*" */;
}

// corrected: third one, add one quote