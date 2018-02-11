#pragma once

#include "stdafx.h"

class ProcessManager
{
public:
	ProcessManager();
	~ProcessManager();
	bool FindProcess(const wchar_t* processName, PROCESSENTRY32& pe32);
private:
	std::vector<PROCESSENTRY32> processList;
	bool UpdateProcessList();
};
