
#pragma once

#include "ForgeLib/Forge.Path.h"

int TestForgePathRelative()
{
	const char* pathRoot = "C:\\test\\";
	const char* path     = "C:\\test\\relative\\path\\";

	char relative[1024] = {};

	int isRelative = common_path_relative(pathRoot, path, relative);

	return 0;
}
