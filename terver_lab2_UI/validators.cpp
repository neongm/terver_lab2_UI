#include "validators.h"

bool validators::IsDigit(char value)
{
    const char digits[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
    for (size_t i = 0; i < 10; i++) if (digits[i] == value) return true;
    return false;
}

bool validators::IsThereADot(std::string string)
{
    for (auto el : string) if (el == ',') return true;
    return false;
}
