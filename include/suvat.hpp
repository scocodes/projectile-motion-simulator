#pragma once 

namespace suvat{
    double position_init(int u, int t, int a);
    double position_vel(int v, int t, double a);
    double position_u_v(int u, int v, int t);
    double velocity_pos(int u, int a, int s);
    double velocity_time(int u, int a, int t);
}

namespace outputs{
    void position(int u, int t, int a);
}