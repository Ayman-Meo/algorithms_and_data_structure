#define LOG_HPP
#ifdef LOG_HPP

#include <iostream> // for  std::cout, std::endl, std::format, std::string, std::size_t
using std::cout;
using std::endl;
using std::string;
using std::format;
using std::size_t;


namespace Log {

// =================================================
// ANSI color codes
 // ANSI color codes   
#define red "\033[31m"
#define green  "\033[32m"
#define yellow "\033[33m"
#define blue "\033[34m"
#define magenta "\033[35m"
#define cyan "\033[36m"
#define reset "\033[0m"
// =================================================

// Enums for colors and log levels
enum class Color : size_t{  BLUE, CYAN, MAGENTA, GREEN, YELLOW , RED, RESET };
// Mapping of enums to their string representations
static const char* strColor[] = { blue, cyan, magenta,green,  yellow ,   red,reset };

// Log levels
enum class LogLevel : size_t { INFO , STEP, NOTICE, SUCCESS, WARNING, ERROR};

// Mapping of log levels to their string representations
static const char* strLogLevel[] = { "INFO" , "STEP", "NOTICE", 
    "SUCCESS", "WARNING", "ERROR" };

// Get the string representation of a log level
static const char* levelToStr(const LogLevel &level);

// get color code for a log level
const char* colorForLogLevel(const LogLevel &level);

// Get the ANSI color code for a given color enum
const char* colorCode(const Color &c);

// Print a message with a specific color and an optional end character (default is newline)
void print(const char* msg, const Color &c , const char* end = "\n");

// ==================================================
// Log functions for different log levels
void info(const string &message);

void step(const string &message);

void notice(const string &message);

void success(const string &message);

void warning(const string &message);

void error(const string &message);
// ===================================================

// General log function that includes file name, line number, log level, and message
void log(string file, size_t line, LogLevel level,
                const string &message);

} // namespace Log

#endif // LOG_HPP