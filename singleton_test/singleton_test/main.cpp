#include <iostream>
#include "output_log.h"

void test()
{
	Output_log *test = Output_log::get_instance();
	*test<<"test log\n";
}

int main()
{
	Output_log *logger = Output_log::get_instance();
	logger->open("log.txt");
	*logger<<"main log\n";
	test();
	logger->close();
	system("pause");
	return 0;
}