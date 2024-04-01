#include <iostream>

int main() {
    double area, triangleSide , triangleHeight; 

    std::cout << "Welcome to the triangle area calculator!" << '\n'; 
    system("PAUSE");

    std::cout << "Enter the value for one of the sides of the triangle:";
    std::cin >> triangleSide;

    std::cout << "Enter the value for the height of the triangle:";
    std::cin >> triangleHeight;

    area = (triangleSide * triangleHeight) / 2;  //the formula

    std::cout << "Your triangle value is: " << area << '\n';
    system("PAUSE");

    return 0;
}