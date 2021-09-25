#ifndef PIMPLLOG_LOG_H
#define PIMPLLOG_LOG_H

#endif //PIMPLLOG_LOG_H

#include <memory>
using namespace std;

class Log{

public:
    Log();
    ~Log();
    void hello();
    void log_date();
    void log_hour();
    void log_total_memory();
    void log_used_memory();

private:
    class LogImpl;
    unique_ptr<LogImpl> mLogImpl;
};

