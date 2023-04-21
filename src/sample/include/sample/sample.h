#ifndef SAMPLE_H
#define SAMPLE_H
#include <string>
struct Sample
{
    Sample(std::string x) : name {x} {}

    void setName(std::string name);
    std::string getName();

    private:
        std::string name;
};


#endif