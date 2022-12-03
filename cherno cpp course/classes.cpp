#include "header.h"

class Logs
{
public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;

private:
    int m_LogLevel = LogLevelInfo;

public:
    void    SetLevel(int level)
    {
        m_LogLevel = level;
    }
    void    Warn(const char *message)
    {
        if (m_LogLevel == LogLevelWarning)
            std::cout << "[WARNING]: " << message << std::endl;
    }
    void    Error(const char *message)
    {
        if (m_LogLevel == LogLevelError)
            std::cout << "[ERROR]: " << message << std::endl;
    }
    void    Info(const char *message)
    {
        if (m_LogLevel == LogLevelInfo)
            std::cout << "[INFO]: " << message << std::endl;
    }
};




int main()
{
    Logs log;

    log.SetLevel(1);
    log.Error("hello error");
    log.Warn("hello warning");
    log.Info("hello info");

}