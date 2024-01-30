//this is basic statistics

#include <iostream>

int main(){

    //Program which asks the user for two numbers and then outputs the following basic statistics
    //the sum, difference, product, distance, mean average

    int num1, num2;
    //might need to change types
    int sum, difference, product, distance, meanAvg;

    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> num1 >> num2;

    //calculating

    //printing results
    std::cout << "The sum of:" << num1 << "and" << num2 <<  "is: "<< sum << std::endl;
    std::cout << "The difference between:" << num1 << "and" << num2 << "is: "<< difference << std::endl;
    std::cout << "The product between:" << num1 << "and" << num2 << "is: "<< product << std::endl;
    std::cout << "The distance between:" << num1 << "and" << num2 << "is: "<< distance << std::endl;
    std::cout << "The mean average between:" << num1 << "and" << num2 << "is: "<< meanAvg << std::endl;
    
}