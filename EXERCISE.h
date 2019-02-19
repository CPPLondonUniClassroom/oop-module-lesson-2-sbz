#pragma once

#include <string>

//This is for part 1
class ILogger {
    public:
        virtual ILogger& LogInfo(const std::string& msg) = 0;
        virtual ILogger& LogError(const std::string& msg) = 0;
        virtual const std::string& GetLastError() const = 0;
        virtual ~ILogger() = default;
};

// This is for Part 2/3
class StringLogger {

};
