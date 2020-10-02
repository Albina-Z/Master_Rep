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
    std::cout << "Also, I have " << Pets << " pets." << std::endl;
    char string1[]= "cat";
    char string2[]= "hamster";
    char string3[]= "turtle";
    std::cout << "It is a " << string1 << ", a " << string2 << " and a " << string3 <<"."<< std::endl;
    if((sum/9)>i)
        std::cout << sum/9 << " more than " << i <<"."<< std::endl;
    else
    if((sum/9)>i)
        std::cout << sum/9 << " less than" << i <<"."<< std::endl;
    else std::cout << sum/9 << " = " << i <<"."<< std::endl;
    int x=56;
    int y=78;
    float z;
    z = fmod(y, x);
    std::cout << "I will graduate from university in 20" << z << "."<< std::endl;
    std::cout << "The End." << std::endl;
    return 0;
}
