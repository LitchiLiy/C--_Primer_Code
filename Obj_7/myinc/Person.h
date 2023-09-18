#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

using std::string;

// 声明
struct Person;
std::ostream &print(std::ostream &couts, const Person &items);
std::istream &read(std::istream &cins, Person &items);


// 定义
struct Person
{
    // 构造函数
    Person() = default;
    Person(const string &s, const string &a) : name(s), address(a){};
    Person(std::istream &str1){
        read(str1, *this);
    }
    string name;
    string address;
};



std::ostream &print(std::ostream &couts, const Person &items)
{
    couts << items.name << " " << items.address;
    return couts;
}

std::istream &read(std::istream &cins, Person &items)
{
    cins >> items.name >> items.address;
    return cins;
}

#endif