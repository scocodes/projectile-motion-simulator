#include <iostream>
#include <vector>
#include <cmath>
#include "suvat.hpp"


int main(){
    int u = 100;
    int t = 10;
    int a = 10;
    double s = suvat::position_init(u, t, a);
    std::cout << "You are at: " << s;
    return 0;
}

