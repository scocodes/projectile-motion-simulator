#pragma once 

#include <iostream>
#include <vector>
#include "state.hpp"
#include <cmath>

class Projectile{
    public:
            Projectile(double v0, double theta, double h0, double dt);
        
            double degToRad();
            double angleCalc();
            
            double basic_range_height();
            void output();
    private:
        double v0;
        double theta;
        double h0;
        double dt;
        State state;
        double grav = 9.81;
        
    };