#include <stdio.h>

int main(){

int a,b,c;

printf("Give the parameter of a : ");
scanf("%d",&a);
printf("Give the parameter of b : ");
scanf("%d",&b);
printf("Give the parameter of c : ");
scanf("%d",&c);

if(a+b>c&&a+c>b&&b+c>a){


if(a>b && a>c){
    if(a*a == b*b + c*c){
        printf("It is right angle triangle where a is hypotenuse.");
    }else{
        printf("This parameters do not form a right angle triangle");
    }
}else if(b>a && b>c){
     if(b*b == a*a + c*c ){
        printf("It is right angle triangle where b is hypotenuse.");
    }else{
        printf("This parameters do not form a right angle triangle");
    }
}else if(c>a && c>b){
     if(c*c == a*a + b*b){
        printf("It is right angle triangle where c is hypotenuse.");
    }else{
        printf("This parameters do not form a right angle triangle.");
    
}
}else{
    printf("This parameters do not form a right angle triangle");
}
}else{
    printf("This parameters do not form a triangle");
}

    return 0;
}