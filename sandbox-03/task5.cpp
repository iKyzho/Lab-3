#include <cstdint>
#include <cstring>
#include <iostream>
void show(float f) {
    std::uint32_t bits = 0;
    std::memcpy(&bits, &f, sizeof(bits));
    std::cout << (bits >> 31) << ' ' << ((bits >> 23) & 0xFF) << '\n';
}
int main() {
    show(-2.5f);
    show(1.0f);
}
