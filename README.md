# fractal_flame

## Program for C++ Final Project that implements the Fractal Flame Algorithm.

## Project Summary

  From the Fractal Flame Algorithm paper, our group has implemented the Sierpinski's Gasket using the Fractal Flame Algorithm, which is a member of the Iterated Function Systems. The algorithm takes in a random point in a bi-unit square where the coordinate values are limited to (-1, 1). Then a random color scalar variable that is limited to (0,1). Taking these to account, we iterate randomly through set of transformation functions, which are F0(x, y) = (x/2, y/2), F1(x, y) = ((x+1)/2), y/2), F2(x, y) = ((x/2, ((y+1)/2)), for some integer value. Also we update the color value by finding the average of the random color scalar and color value assigned to each of the transformation function. Finally, the algorithm plots the point for visual representation.Due to the trickiness of implementing the algorithm we were required to use function pointers and also create a struct called Transform that has a function pointer as a member and a color value. These in a sense, represented each of the transform functions.Then for our data set, we had vector of type double of x-coordinates, y-coordinates, and vector of type int for value of color scalardue to us working with Python Visualizer.We then implemented post and final transform on the Sierpinski's Gasket where We had encountered many challenges. One being communication, as it was very hard to get everyone to meetup and work on the project as a whole. Everyone was doing bits and pieces. Another challenge being, the make file due to the way we constructed the project. The makefile given to us would only work for one instance. We had created a different file for each instance shown, the gasket, the post transformation, the final transformation, and the variance. Then  we created separate directories for each instance. Here a makefile was created for each of the directories. Although inefficient, this was one way to work around the issue The results were as expected, in the first instance “main”, a figure of Sierpinski’s Gasket. In the spherical variance, the points were spreading out and looking to be inverted which was expected by the behavior of 1/(r^2). In the post transformation, the image appears to be flipped and compressed, this is most likely due to the x and y being divided by 2.  Lastly, in  the final transformation the points appear to be getting smaller and smaller and this is expected because when decimals get multiplied by other decimals it produces a smaller number. One possible improvement could be creating all the instances under one make file. Another improvement could be to have better communication of roles when the project was assigned. Another improvement could be adding more to the project, such as more variances.
  
  
  
  
  
  
  
  






Huge thanks to Professor Sanchirico for providing the necessary information and codes to implement this algorithm. 
