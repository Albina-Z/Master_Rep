#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "My name is Albina." << std::endl;
    int sum=0;
    for (int i=0;i<10;i++) sum+=i;
    std::cout << "sum=" << sum << std::endl;
    std::cout << "I'm 17 years old." << std::endl;
    int i=0;
    int num=1;
    while (i<5) {
        num+=2;
        i++;
    }
    std::cout << "I have an " << num << "-years-old sister." << std::endl;
    int Pets=((sum/9) - 2);
    std::cout << "Also, I have an " << Pets << " pets." << std::endl;
    char string1[]= "cat";
    char string2[]= "hamster";
    char string3[]= "turtlr";
    std::cout << "It is a " << string1 << ", a " << string2 << " and a " << string3 <<"."<< std::endl;
    return 0;
}
