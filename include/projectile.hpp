#pragma once 

#include <iostream>
#include <vector>
#include "state.hpp"

class Projectile{
    public:
            Projectile(double v0, double theta, double h0, double dt);
        
            double degToRad();
            Results basic_range_height();
            void output();
            std::vector<State> state_update();
            void ouputTrajCSV();
            
    private:
        double v0;
        double theta;
        double h0;
        double dt;
        State state;
        Results results;
        double grav = 9.81;
        std::vector<State> trajectory;
        
    };