#include <iostream>
#include <vector>
#include <cmath>
#include "suvat.hpp"
#include "projectile.hpp"


int main(){
    double v0 = 100;
    double theta = 45;
    double dt = 100;
    double h0 = 0;
    Projectile proj(v0, theta, h0, dt);
    proj.output();

    return 0;

}

