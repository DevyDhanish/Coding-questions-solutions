#include <iostream>
#include <string>

std::string intToRoman(int num) {
    std::string roman = "";
    std::string thousands[] = {"", "M", "MM", "MMM"};
    std::string hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    std::string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    std::string ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    
    roman += thousands[num / 1000];
    num %= 1000;
    roman += hundreds[num / 100];
    num %= 100;
    roman += tens[num / 10];
    num %= 10;
    roman += ones[num];
    
    return roman;
}

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;
    std::string roman = intToRoman(num);
    std::cout << num << " in Roman numerals is " << roman << std::endl;
    return 0;
}
