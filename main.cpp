#include <iostream>
#include <string>

bool Polindrom(std::string& str)
{
    size_t size = str.size();
    for (size_t i = 0; i < size / 2; i++) {
        if (str[i] != str[size - i - 1]) {
            return false;
        }
    }
    return true;
}


int main() {
    std::string str1;
    std::cout<<" Hello! Your string: "<<std::endl;
    std::cin>>str1;
    if(Polindrom(str1))
    {
        std::cout << " Yes! Polindrom.";
    }
    else
    {
        std::cout << " No! Error! Not polindrom";
    }
    return 0;
}