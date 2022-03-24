#include <string>
#include <stdlib.h>
#include <iostream>
#pragma once
#include "Direction.hpp"
using namespace std;

namespace ariel
{

    class Notebook
    {

    public:
        Notebook();
        ~Notebook();
        void write(int page, int row, int col, Direction d, string txt);
        string read(int page, int row, int col, Direction d, int length);
        void erase(int page, int row, int col, Direction d, int length);
        void show(int page);
    };
}