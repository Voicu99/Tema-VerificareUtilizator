// Tema  VerificareUtilizator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

bool VerificareUtilizator(std::string user_introdus) {
    const std::string user_corect = "Voicu"; // Numele de utilizator corect

    // Comparam numele de utilizator introdus cu numele de utilizator corect
    if (user_introdus == user_corect) {
        return true; // Numele de utilizator introdus este corect
    }
    else {
        return false; // Numele de utilizator introdus este incorect
    }
}

int main() {
    std::string user;
    std::cout << "Introduceti numele de utilizator: ";
    std::cin >> user;

    if (VerificareUtilizator(user)) {
        std::cout << "Numele de utilizator este corect." << std::endl;
    }
    else {
        std::cout << "Numele de utilizator este incorect.\n";
    }

    return 0;
}
