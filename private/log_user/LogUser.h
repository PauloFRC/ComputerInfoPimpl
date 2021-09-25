#ifndef PIMPLLOG_LOGUSER_H
#define PIMPLLOG_LOGUSER_H

#endif //PIMPLLOG_LOGUSER_H

class LogUser{
private:
    TCHAR user[50];
    DWORD user_length = 51;
public:
    LogUser(){GetUserName((TCHAR*)user, &user_length);}
    void log_username(){
        cout << "Hello user " << user << endl;
    }
};