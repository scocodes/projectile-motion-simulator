#include <iostream>
#include <vector>
#include "state.hpp"
#include <cmath>
#include "projectile.hpp"

class Projectile
{
    public:
        Projectile(double v0, double theta, double h0, double dt)
        : v0(v0), theta(theta), h0(h0), dt(dt)
        {  
        }
        
        double degToRad(){
            double rad = theta/180.0 * M_PI;
            return rad;
        }
        double angleCalc(){
            double theta_rad = degToRad();
            state.vx = v0*std::cos(theta_rad);
            state.vy = v0*std::sin(theta_rad);
            return state.vx, state.vy;
        }
        double basic_range_height(){
            double range = state.vx*dt;
            double apex = (state.vy*state.vy)/2*grav;
            return range, apex;
        }

        void output(){
            state.vx, state.vy = angleCalc();
            double range, apex = basic_range_height();

            std::cout << "Range: " << range << '\n';
            std::cout << "Apex" << apex << '\n';

        }
    private:
        double v0;
        double theta;
        double h0;
        double dt;
        State state;
        double grav = 9.81;
        

};
