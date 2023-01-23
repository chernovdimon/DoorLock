#include <iostream>
#include <string>

std::string passcode;

int main() {
    std::cout << "Enter passcode to set the lock: ";
    std::cin >> passcode;

    std::cout << "Door lock set with passcode: " << passcode << std::endl;

    while (true) {
        std::cout << "Enter passcode to unlock the door: ";
        std::string enteredPasscode;
        std::cin >> enteredPasscode;

        if (enteredPasscode == passcode) {
            std::cout << "Door Unlocked." << std::endl;
            break;
        } else {
            std::cout << "Incorrect passcode. Please try again." << std::endl;
        }
    }
    return 0;
}
