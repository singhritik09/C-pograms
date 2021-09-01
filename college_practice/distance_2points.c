#include <stdio.h>
#include <math.h>

int main(){
    float x1,y1,x2,y2,distance;
    printf("Coordinates of first point:x1 & y1\n");
    scanf("%f %f",&x1 ,&y1);
    printf("Coordinates of second point:x2 & Y2\n");
    scanf("%f %f",&x2 ,&y2);
    distance = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    printf("%f Distance between two given points:\n",distance);
    return 0;

}
