#include "ft_point.h"
#include <stdio.h>

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}
	int main(void)
{
	t_point		point;
	set_point(&point);
	printf("x: %d y: %d (at %p)\n", point.x, point.y, &point);
	return (0);
}
