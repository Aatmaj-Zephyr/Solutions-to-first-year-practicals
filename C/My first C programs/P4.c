#include <stdio.h>
/* C Program for area & perimeter of a rectangle given height and width of a rectangle in inches */

//int width;
//int height;


void main()
{
	int height = 7;
	int width = 5;
    int area;
    int perimeter;

    perimeter = 2*(height + width);
	printf("Perimeter of the rectangle = %d inches\n", perimeter);

	area = height * width;
	printf("Area of the rectangle = %d square inches\n", area);


//return(0);
}
