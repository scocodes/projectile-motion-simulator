#include <iostream>
#include <vector>
#include "state.hpp"
#include <cmath>
#include "projectile.hpp"


Projectile::Projectile(double v0, double theta, double h0, double dt)
: v0(v0), theta(theta), h0(h0), dt(dt)
{
    double thetaRad = degToRad();
    state.x = 0;
    state.y = h0;
    state.vx = v0*std::cos(thetaRad);
    state.vy = v0*std::sin(thetaRad);

}

double Projectile::degToRad(){
    return theta/180.0 * M_PI;
}

Results Projectile::basic_range_height(){
    results.range = state.vx*dt;
    results.apex = (state.vy*state.vy)/2*grav;
    return results;
}

void Projectile::output(){
    Results range, apex = basic_range_height();

    std::cout << "Range: " << results.range << '\n';
    std::cout << "Apex" << results.apex << '\n';

}

