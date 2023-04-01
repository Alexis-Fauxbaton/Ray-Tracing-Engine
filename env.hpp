#include <iostream>
#include <vector>
#include <entity.hpp>

using namespace std;

class Env {
    public:
    vector<Entity> entities;
    int dim[3];
    Env(int dim_[3]):dim{dim_[0], dim_[1], dim_[2]} {};
    
};