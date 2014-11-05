#include <iostream>
#include <stdarg.h>

void TestVariableArguments(const char* format, ...);

int main()
{
	TestVariableArguments("", "abc", 1, 'd', 2.01);
	return 0;
}

void TestVariableArguments(const char* format, ...)
{
	va_list arglist;

	va_start(arglist, format);

	std::cout << va_arg(arglist, char*) << std::endl;
	std::cout << va_arg(arglist, int) << std::endl;
	std::cout << va_arg(arglist, char) << std::endl;
	std::cout << va_arg(arglist, double) << std::endl;

	va_end(arglist);
}