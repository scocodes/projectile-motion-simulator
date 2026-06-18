#include <iostream>
#include <vector>
#include <cmath>
#include "suvat.hpp"
#include "projectile.hpp"


int main(){
    double v0 = 50;
    double theta = 45;
    double dt = 0.1;
    double h0 = 0;
    Projectile proj(v0, theta, h0, dt);
    proj.state_update();
    proj.ouputTrajCSV();

    return 0;

}
