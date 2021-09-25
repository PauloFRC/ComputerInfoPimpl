#include "Log.h"
#include <iostream>
#include "log_time/LogTime.h"
#include "log_memory/LogMemory.h"
#include "log_user/LogUser.h"

class Log::LogImpl{
private:
    LogTime time_log;
    LogMemory memory_log;
    LogUser user_log;
public:
    LogImpl(): time_log(LogTime()), memory_log(LogMemory()), user_log(LogUser()){}
    void log_date(){time_log.log_date();}
    void log_hour(){time_log.log_hour();}
    void hello(){user_log.log_username();}
    void log_total_memory(){memory_log.log_total_memory();}
    void log_used_memory(){memory_log.log_used_memory();}

};

Log::Log(): mLogImpl(make_unique<LogImpl>()) {

}

Log::~Log(){}

void Log::hello(){
    return mLogImpl->hello();
}
void Log::log_date() {
    return mLogImpl->log_date();
}
void Log::log_hour() {
    return mLogImpl->log_hour();
}
void Log::log_total_memory() {
    return mLogImpl->log_total_memory();
}
void Log::log_used_memory() {
    return mLogImpl->log_used_memory();
}
