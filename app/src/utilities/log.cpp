#include "../../include/utilities/log.hpp"

 const char* Log::colorCode(const Color &c) {
    return strColor[static_cast<size_t>(c)];
}
 const char* Log::colorForLogLevel(const LogLevel &level) {
    return  strColor[static_cast<size_t>(level)];
}
const char* Log::levelToStr(const LogLevel &level) {
    return strLogLevel[static_cast<size_t>(level)];
}
 void Log::print(const char* msg, const Color &c, const char* end) {
    cout << colorCode(c) << msg << reset << (end ? end : "\n");
}

 void Log::info(const string &message) {
    cout << format("{}[INFO]: {} {}\n", 
                             colorForLogLevel(LogLevel::INFO), 
                             message,
                             colorCode(Color::RESET));
}

 void Log::step(const string &message) {
    cout << format("{}[STEP]: {} {}\n", 
                   colorForLogLevel(LogLevel::STEP), 
                   message,
                   colorCode(Color::RESET));
}

 void Log::notice(const string &message) {
    cout << format("{}[NOTICE]: {} {}\n", 
                   colorForLogLevel(LogLevel::NOTICE), 
                   message,
                   colorCode(Color::RESET));
}

 void Log::success(const string &message) {
    cout << format("{}[SUCCESS]: {} {}\n", 
                   colorForLogLevel(LogLevel::SUCCESS), 
                   message,
                   colorCode(Color::RESET));
}

 void Log::warning(const string &message) {
    cout << format("{}[WARNING]: {} {}\n", 
                   colorForLogLevel(LogLevel::WARNING), 
                   message,
                   colorCode(Color::RESET));
}

 void Log::error(const string &message) {
    cout << format("{}[ERROR]: {} {}\n", 
                   colorForLogLevel(LogLevel::ERROR), 
                   message,
                   colorCode(Color::RESET));
    }

 void Log::log(string file, size_t line, LogLevel level,
                     const string &message) {
    cout << endl << string(100, '=') << endl;
    cout << format("{}[{}]: {}\n {}: {} {}\n",
                   colorForLogLevel(level),
                   levelToStr(level),
                   message,
                   file,
                   line,
                   colorCode(Color::RESET));
    cout << string(100, '=') << endl << endl;
}