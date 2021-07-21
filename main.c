//hi yes i changed it into C

#include <stdio.h>
#include <math.h>

int main(){
    double screenSize;
    int widthRatio, lengthRatio;
    int resolutionX, resolutionY;
    printf("Input the screen size (inch):");
    scanf("%lf", &screenSize);
    printf("\nInput the ratio (num:num):");
    scanf("%d:%d", &widthRatio, &lengthRatio);
    printf("\nInput the resolution (num, num):");
    scanf("%d, %d", &resolutionX, &resolutionY);
    double ratio = sqrt(pow(screenSize, 2) / (pow(widthRatio, 2) + pow(lengthRatio, 2)));
    float width = widthRatio * ratio;
    float length = lengthRatio * ratio;
    float area = width * length;
    int pixels = resolutionX*resolutionY;
    float dpi = sqrt(pixels/area);
    int rounded = dpi + 0.5;
    printf("\nThe screen DPI is: %d\n\n", rounded);
    return 0;
}
