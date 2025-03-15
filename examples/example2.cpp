#include "print.hpp"
#include <fstream>

int main() {
    std::ofstream out("log.txt");
    print("hello", out);
    out.close();
    return 0;
}
