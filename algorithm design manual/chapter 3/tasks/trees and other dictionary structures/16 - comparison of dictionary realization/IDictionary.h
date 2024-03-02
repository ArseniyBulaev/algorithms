#pragma once

#include <string>

class IDictionary{
public:
    virtual ~IDictionary();
    virtual void insert(const std::string &) = 0;
    virtual bool find(const std::string &) = 0;
};