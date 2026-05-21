#include "../../include/cli/cli_app.hpp"
#include "../../include/utilities/log.hpp"

int Cli::cliApp() {
    system(CLEAR_SCREEN);
    cout << string(50, '-') << endl;
    Log::print("Welcome to Algorithms & Data Structure", Log::Color::MAGENTA);
    cout << string(50, '-') << endl;

    cout << "Please choose an option from the menu below:" << endl;
    cout << "1. Algorithms" << endl;
    cout << "2. Data Structures" << endl;
    cout << "3. Examples" << endl;
    cout << "4. Exit" << endl;

    int choice;
    cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            Cli::algorithmsTestSection();
            break;
        case 2:
            Cli::dataStructuresTestSection();
            break;
        case 3:
            Cli::algorithmsExamplesSection();
            Cli::dataStructuresExamplesSection();
            break;
        case 4:
            Log::print("Thank you for using the program. Goodbye!", Log::Color::GREEN);
            return 0;
        default:
            Log::print("Invalid choice. Please try again.", Log::Color::RED);
            Cli::cliApp();
            break;
    }
    return 0;
}
void Cli::algorithmsTestSection() {
    system(CLEAR_SCREEN);
    cout << string(50, '-') << endl;
    Log::print("Algorithms Section", Log::Color::CYAN);
    cout << string(50, '-') << endl;

    // Add your algorithms test code here

    cout << "Press Enter to return to the main menu...";
    system(PAUSE_SCREEN);
    Cli::cliApp();
}

void Cli::dataStructuresTestSection() {
    system(CLEAR_SCREEN);
    cout << string(50, '-') << endl;
    Log::print("Data Structures Section", Log::Color::CYAN);
    cout << string(50, '-') << endl;

    // Add your data structures test code here

    cout << "Press Enter to return to the main menu...";
    system(PAUSE_SCREEN);
    Cli::cliApp();
}

void Cli::algorithmsExamplesSection() {
    system(CLEAR_SCREEN);
    cout << string(50, '-') << endl;
    Log::print("Algorithms Examples Section", Log::Color::CYAN);
    cout << string(50, '-') << endl;

    // Add your algorithms examples code here

    cout << "Press Enter to return to the main menu...";
    system(PAUSE_SCREEN);
    Cli::cliApp();
}

void Cli::dataStructuresExamplesSection() {
    system(CLEAR_SCREEN);
    cout << string(50, '-') << endl;
    Log::print("Data Structures Examples Section", Log::Color::CYAN);
    cout << string(50, '-') << endl;

    // Add your data structures examples code here

    cout << "Press Enter to return to the main menu...";
    system(PAUSE_SCREEN);
    Cli::cliApp();
}