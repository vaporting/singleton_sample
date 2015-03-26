#ifndef OUTPUT_LOG_H
#define OUTPUT_LOG_H

#include <fstream>

class Output_log : public std::ofstream
{
public:
	static Output_log* get_instance();

private:
	static Output_log *instance;
	Output_log();
};

#endif