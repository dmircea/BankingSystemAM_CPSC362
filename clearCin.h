#pragma once

void clearCin()
{
    std::cout << "Oops! Something was typed wrong. Please try again!" << std::endl;
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');
}
