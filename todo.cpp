#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector<std::string> list;

    while (true){

        std::cout << "action? (A)DD, (V)IEW, (D)ELETE" << std::endl;
        char action;
        std::cin >> action;
        std::cin.ignore();

        if (action == 'A') {
            std::cout << "what would you like to add?" << std::endl;
            std::string input;
            std::getline(std::cin, input);
            list.push_back(input);
            std::cout << "added " << input << " to the list.";

        } else if (action == 'V'){
            std::cout << "the list is: " << std::endl;
            for(const std::string& element : list) {
                std::cout << element << std::endl;
            }
        } else if (action == 'D') {
            std::cout << "which item would you like to delete? (1,2,3,4...)" << std::endl;
            int ind = 0;
            std::cin >> ind;
            ind = ind - 1;
            list.erase(list.begin() + ind);
        }
    }
}