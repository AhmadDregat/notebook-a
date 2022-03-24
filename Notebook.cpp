#include <string>
#include <stdlib.h>
#include <iostream>
#include "Notebook.hpp"
#include "Direction.hpp"
using namespace std;

namespace ariel
{
    Notebook::Notebook(){

    }
    Notebook::~Notebook(){

    }

    void Notebook::write(int page, int row, int col, Direction d, string txt)
    {
    }
    string Notebook::read(int page, int row, int col, Direction d, int length)
    {

        return "";
    }
    void Notebook::erase(int page, int row, int col, Direction d, int length)
    {
    }
    void Notebook::show(int page)
    {
    }
}