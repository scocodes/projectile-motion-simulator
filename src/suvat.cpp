#include <iostream>
#include <cmath>
#include "suvat.hpp"

namespace suvat{
double position_init(int u, int t, int a){
    double s = u * t + 0.5*a*t*t;
    return s;
}
double position_vel(int v, int t, double a){
    double s = v * t - 0.5*a*t*t;
    return s;
}
double position_u_v(int u, int v, int t){
    double s = 0.5*(u+v)*t;
    return s;
}
double velocity_pos(int u, int a, int s){
    double v = std::sqrt(u*u + 2.0*a*s);
    return v;
}
double velocity_time(int u, int a, int t){
    double v = u + a*t;
    return v;
}
}

namespace outputs{
void position(int u, int t, int a){
    double s = suvat::position_init(u, t, a);
    std::cout << "You are at: " << s << " m" <<'\n';
}
}