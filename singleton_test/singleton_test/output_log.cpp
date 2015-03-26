#include "output_log.h"

Output_log* Output_log::instance = NULL;

Output_log* Output_log::get_instance()
{
	if(!instance)
		instance = new Output_log();
	return instance;
}

Output_log::Output_log()
{}