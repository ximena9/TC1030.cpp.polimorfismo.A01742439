#pragma once

#include "Shape.hpp"

class Circle:public Shape
{
private:
    int r;
public:
    Circle();
    Circle(int, int, int);
    int getRadio();

    std::string draw() override;
    double getArea() override;
};