//This is the application of the final transform for the fractal flame algorithm
/*
Author: Sat
Modifier: Uchenna
*/
#include "pyvis/PythonVisualizer.h"

#include <cmath>
#include <vector>
#include <random>
#include <type_traits>
#include <iostream>
#include <string>
#include "writer.h"

using namespace std;
using Function = add_pointer_t<void(double&, double&)>;

struct Transform
{
    Function f;
    double color = 0.0;

    Transform(Function fn, double col):f(fn), color(col){}
};

void fn_1(double& x, double& y)
{
    x = x/2;
    y = y/2;
}
//void fn_1b(double& x, double& y)
//{ 
  //  x = (x+1)/2;
    //y = (y+1)/2;
    
//}

void fn_2(double& x, double& y)
{
    x = (x+1)/2;
    y = y/2;
}

void fn_3(double& x, double& y)
{
    x = (x/2);
    y = (y+1)/2;
}

void fn_4(double& x, double& y)
{
    x = (x*x);
    y = (y*y);
}
int main(int argc, char *argv[])
{
    if(argc != 2)
    {
	cerr << "Number of iteration not found!" << endl;
	return 1;
    }
    mt19937 engine;
    uniform_real_distribution<double> dis(-1.0, 1.0);
    uniform_real_distribution<double> dis_c(0.0, 1.0);
    double x = dis(engine);
    double y = dis(engine);
    double c = dis_c(engine);
    vector<double> x_data;
    vector<double> y_data;
    vector<int> c_data;
    vector<Transform> transforms;

    Transform t1(fn_1,0.0);
    transforms.emplace_back(t1);
    Transform t2(fn_2,0.5);
    transforms.emplace_back(t2);
    Transform t3(fn_3,1.0);
    transforms.emplace_back(t3);

    int num_fn = 3;
    int n = 0;
    int  max_time = stoi(argv[1]);       //number of iterations to make
    uniform_int_distribution<int> dis_n(0,num_fn-1);

    //algorithm for implementing the Chaos Game
    for(int i = 0; i < max_time; i++)
    {
	n = dis_n(engine);
	transforms[n].f(x,y);
    fn_4(x,y);
	c = (c + transforms[n].color) / 2.0;
   
        if(i >= 20)
        {
            //plotting...
	    x_data.push_back(x);
	    y_data.push_back(y);
	    c_data.push_back(static_cast<int>(c * 256.0));
        }

    }
   //code to create a data file for testing
    write_data(x_data, y_data, c_data);
   //code provide for visualization
    py::PythonVisualizer pyvis({"../.."});
    auto figure = pyvis.make_new_figure("fractal flame");
    pyvis.plot(figure, "circle", x_data, y_data, py::kwarg("color", c_data));
    pyvis.generate_html(figure, "flame3.html");
   
    return 0;
}