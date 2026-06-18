#include <iostream>
#include <vector>
#include "state.hpp"
#include <cmath>
#include "projectile.hpp"
#include <fstream>


Projectile::Projectile(double v0, double theta, double h0, double dt)
: v0(v0), theta(theta), h0(h0), dt(dt)
{
    double thetaRad = degToRad();
    state.x = 0.0;
    state.y = h0;
    state.t = 0.0;
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

std::vector<State> Projectile::state_update(){

    double steps = 1000.0*dt;
    while (state.y >= 0 && state.t < steps){
        trajectory.push_back(state);
        state.t += dt;
        state.x += state.vx*dt;
        state.y += state.vy*dt;
        state.vy -= grav*dt;
    }
    return trajectory;
    }
    
void Projectile::ouputTrajCSV(){
    std::ofstream file("outputs/trajectory.csv");
    file << "t,x,y\n";

    for (const State& s : trajectory){
        file << s.t << "," 
        << s.x << "," 
        << s.y << "\n";
    }
    file.close();
}
