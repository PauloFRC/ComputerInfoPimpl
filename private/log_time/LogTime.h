#ifndef PIMPLLOG_LOGTIME_H
#define PIMPLLOG_LOGTIME_H

#endif //PIMPLLOG_LOGTIME_H

#include <ctime>

class LogTime{
private:
    std::time_t t;
    tm* now;
public:
    LogTime():t(time(0)), now(localtime(&t)){}
    void log_date(){
        cout << now->tm_mday << "/" << now->tm_mon+1 << "/" << now->tm_year+1900 << endl;
    }
    void log_hour(){
        cout << now->tm_hour << ":" << now->tm_min << ":" << now->tm_sec << endl;
    }
};
