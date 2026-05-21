#define LOG_HPP
#ifdef LOG_HPP

#include <cstddef>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::size_t;
using std::string;

namespace Log {
#define red "\033[31m"
#define green  "\033[32m"
#define yellow "\033[33m"
#define blue "\033[34m"
#define magenta "\033[35m"
#define cyan "\033[36m"
#define reset "\033[0m"


enum class Color : size_t{ RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN , RESET };
static const char* strColor[] = { red, green, yellow, blue, magenta, cyan , reset };

enum class LogLevel : size_t { INFO, STEP, NOTICE, SUCCESS, WARNING, ERROR };
static const char* strLogLevel[] = { "INFO", "STEP", "NOTICE", "SUCCESS", "WARNING", "ERROR" };

const char* colorForLogLevel(const LogLevel &level);

const char* colorCode(const Color &c);

void print(const char* msg, const Color &c , const char* end = "\n");

void info(const string &message);

void step(const string &message);

void notice(const string &message);

void success(const string &message);

void warning(const string &message);

void error(const string &message);

void log(string file, size_t line, LogLevel level,
                const string &message);

} // namespace Log

#endif // LOG_HPP
