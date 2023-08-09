#include <stdio.h>
void trapezium()
{
    float a,b,h,S;
    printf("Enter value a = ");
    scanf("%f",&a);
    printf("Enter value b = ");
    scanf("%f",&b);
    printf("Enter value h = ");
    scanf("%f",&h);

    S=(a+b)*h/2;
    printf("S = %f\n",S);
}
void rectangle(){
    float b,h,S;
    printf("Enter value b = ");
    scanf("%f",&b);
    printf("Enter value h = ");
    scanf("%f",&h);

    S=b*h;
    printf("S = %f\n",S);
}
void rectangular(){
    float l,h,w,S;
    printf("Enter value l = ");
    scanf("%f",&l);
    printf("Enter value h = ");
    scanf("%f",&h);
    printf("Enter value w = ");
    scanf("%f",&w);

    S=2*l*w+2*w*h+2*l*h;
    printf("S = %f\n",S);
} 
void cylinder(){
    float r,h,S;
    printf("Enter value r = ");
    scanf("%f",&r);
    printf("Enter value h = ");
    scanf("%f",&h);

    S=2*3.14*r*(h+r);
    printf("S = %f\n",S);
}
int main() {
    int choice;
    do {
        printf("1. rapezium\n");
        printf("2. rectangle\n");
        printf("3. rectangular\n");
        printf("4. cylinder\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                trapezium();
                break;
            case 2:
                rectangle();
                break;
            case 3:
                rectangular();
                break;
            case 4:
                cylinder();
                break;
			default:
				printf("Invalid choice.\n");
                break;
        }
    } while (choice != 5);
    return 0;
}

  
  

