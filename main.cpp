#include <iostream>
#include <string>
#include "hardcore_algorithm.hpp"

int main()
{
        std::string rb4336578, rb4556778,rb4526778,rb4336573, rb4556578,rb4526773, rb4536578;
        rb4526778 = "Type your login: ";
        rb4526773 = "Type your password: ";
        rb4336578 = "You are successfully logged in.\n";
        rb4336573 = "Wrong password or login. Try again.\n";
        std::cout << rb4526778;
        std::cin >> rb4556778;
        rb4556578 = hse::password_generation_alg(rb4556778);
        std::cout << "Real password: " << rb4556578 << '\n';
        std::cout << rb4526773;
        std::cin >> rb4536578;
        auto rb4136578 = (rb4536578 == rb4526773);
        auto rb4138548 = (rb4536578 == rb4556578);
        if (rb4136578){
            //здесь алгоритм, который использует время, прибавляет к каждой букве по модулю
        }
        if(rb4138548) {
                std::cout << rb4336578;
	}
	else {
                std::cout << rb4336573;
	}
	
	
}

