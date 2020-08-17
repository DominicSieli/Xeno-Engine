#pragma once

#include <iostream>

#include "Color_Codes.h"
#include "Configuration.h"

#ifdef DEBUG

#ifdef LINUX
#define LOG_RED(...) std::cout << "\033[1;" << COLOR::RED << "m" << (__VA_ARGS__) << "\033[0m" << '\n';
#define LOG_BLUE(...) std::cout << "\033[1;" << COLOR::BLUE << "m" << (__VA_ARGS__) << "\033[0m" << '\n';
#define LOG_CYAN(...) std::cout << "\033[1;" << COLOR::CYAN << "m" << (__VA_ARGS__) << "\033[0m" << '\n';
#define LOG_GREEN(...) std::cout << "\033[1;" << COLOR::GREEN << "m" << (__VA_ARGS__) << "\033[0m" << '\n';
#define LOG_WHITE(...) std::cout << "\033[1;" << COLOR::WHITE << "m" << (__VA_ARGS__) << "\033[0m" << '\n';
#define LOG_YELLOW(...) std::cout << "\033[1;" << COLOR::YELLOW << "m" << (__VA_ARGS__) << "\033[0m" << '\n';
#define LOG_MAGENTA(...) std::cout << "\033[1;" << COLOR::MAGENTA << "m" << (__VA_ARGS__) << "\033[0m" << '\n';
#endif

#ifdef WINDOWS
#include <windows.h>
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
#define LOG_RED(...) SetConsoleTextAttribute(console, COLOR::RED); std::cout << (__VA_ARGS__) << std::endl;
#define LOG_BLUE(...) SetConsoleTextAttribute(console, COLOR::BLUE); std::cout << (__VA_ARGS__) << std::endl;
#define LOG_CYAN(...) SetConsoleTextAttribute(console, COLOR::CYAN); std::cout << (__VA_ARGS__) << std::endl;
#define LOG_GREEN(...) SetConsoleTextAttribute(console, COLOR::GREEN); std::cout << (__VA_ARGS__) << std::endl;
#define LOG_WHITE(...) SetConsoleTextAttribute(console, COLOR::WHITE); std::cout << (__VA_ARGS__) << std::endl;
#define LOG_YELLOW(...) SetConsoleTextAttribute(console, COLOR::YELLOW); std::cout << (__VA_ARGS__) << std::endl;
#define LOG_MAGENTA(...) SetConsoleTextAttribute(console, COLOR::MAGENTA); std::cout << (__VA_ARGS__) << std::endl;
#endif

#else
#define LOG_RED(...)
#define LOG_BLUE(...)
#define LOG_CYAN(...)
#define LOG_GREEN(...)
#define LOG_WHITE(...)
#define LOG_YELLOW(...)
#define LOG_MAGENTA(...)
#endif