# fractal_flame

## Program for C++ Final Project that implements the Fractal Flame Algorithm.

## Project Summary

  From the Fractal Flame Algorithm paper, our group has implemented the Sierpinski's Gasket using the Fractal Flame Algorithm, which is
  
  a member of the Iterated Function Systems. The algorithm takes in a random point in a bi-unit square where the coordinate values are 
  
  limited to (-1, 1). Then a random color scalar variable that is limited to (0,1). Taking these to account, we iterate randomly through  
  set of transformation functions, which are F0(x, y) = (x/2, y/2), F1(x, y) = ((x+1)/2), y/2), F2(x, y) = ((x/2, ((y+1)/2)), for some
  
  integer value. Also we update the color value by finding the average of the random color scalar and color value assigned to each of
  
  the transformation function. Finally, the algorithm plots the point for visual representation. 
  
  Due to the trickiness of implementing the algorithm we were required to use function pointers and also create a struct called
  
  Transform that has a function pointer as a member and a color value. These in a sense, represented each of the transform functions.
  
  Then for our data set, we had vector of type double of x-coordinates, y-coordinates, and vector of type int for value of color scalar
  
  due to us working with Python Visualizer.
  
  We then implemented post and final transform on the Sierpinski's Gasket where 
  
  
  
  
  
  
  
  






Huge thanks to Professor Sanchirico for providing the necessary information and codes to implement this algorithm. 
