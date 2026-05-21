// This file is used to include all the necessary headers for the command line interface (CLI) of the program.
#define CLI_APP_HPP
#ifdef CLI_APP_HPP

namespace Cli {

#if defined(_WIN32) || defined(_WIN64)
    #define CLEAR_SCREEN "cls" // Clear the terminal screen (for Windows)
#else
#define CLEAR_SCREEN "clear" // Clear the terminal screen (for Unix/Linux/MacOS)
#endif

#if defined(_WIN32) || defined(_WIN64)
    #define PAUSE_SCREEN "pause" // Pause the terminal screen (for Windows)
#else
#define PAUSE_SCREEN "read" // Pause the terminal screen (for Unix/Linux/MacOS)
#endif


// Func to print the welcome message and the menu options for the user to choose from.
// The CLI will be used to interact with the user and allow them to choose which
//  algorithm or data structure they want to learn about or implement.
int cliApp();

// Func to print the algorithms section of the CLI, 
// where the user can choose which algorithm they want to learn about or implement.
static void algorithmsTestSection();

// Func to print the data structures section of the CLI,
//  where the user can choose which data structure they want to learn about or implement.
static void dataStructuresTestSection();

// Func to print the examples section of the CLI,
//  where the user can see some examples of how to use the algorithms and data structures implemented in the program.
static void algorithmsExamplesSection();

// Func to print the examples section of the CLI,
//  where the user can see some examples of how to use the algorithms and data structures implemented in the program.
static void dataStructuresExamplesSection();

} // namespace Cli
#endif // CLI_APP_HPP