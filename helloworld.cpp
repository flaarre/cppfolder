#include <iostream>

int main(){
    //calculator
    while (true){
    std::cout << "this is a calculator. please select your operator" << std::endl;
    char op = 'a';
    std::cin >> op;

    float first = 0,second = 0;
    std::cout << "first num?"<< std::endl;
    std::cin >> first;
    std::cout << "second num?"<< std::endl;
    std::cin >> second;

    float res = 0;
    if (op == '+' || op == '-' || op == '*' || op == '/'){

        if (op == '+'){
            res = first + second;
        } else if (op =='-'){
            res = first - second;
        } else if (op =='*'){
            res = first * second;
        } else if (op =='/'){
            if (second == 0){
                std::cout << "division by zero. didn't work" << std::endl;
            } else {
            res = first / second;
            }
        }
        std::cout << "result is: " << res << std::endl;
    } else {
        std::cout << 'bad operator' << std::endl;
    }
    }

    return 0;

}