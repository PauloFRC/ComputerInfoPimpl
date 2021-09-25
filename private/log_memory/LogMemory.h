#ifndef PIMPLLOG_LOGMEMORY_H
#define PIMPLLOG_LOGMEMORY_H

#endif //PIMPLLOG_LOGMEMORY_H

#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

class LogMemory{
private:
    MEMORYSTATUSEX memInfo;
public:
    LogMemory(){
        memInfo.dwLength = sizeof(MEMORYSTATUSEX);
        GlobalMemoryStatusEx(&memInfo);
    }
    void log_total_memory(){
        DWORDLONG totalVirtualMem = memInfo.ullTotalPhys;
        cout << "RAM available: " << (double)totalVirtualMem/1073741824 << "gb\n";
    }
    void log_used_memory(){
        DWORDLONG usedVirtualMem = memInfo.ullTotalPhys - memInfo.ullAvailPhys;
        cout << "RAM usage: " << (double)usedVirtualMem/1073741824 << "gb\n";
    }
};
