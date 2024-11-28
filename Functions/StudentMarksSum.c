#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h> 
// we can't edit the above of this


int marks_summation(int* marks, int number_of_students, char gender) {
  int sum = 0,i=0;
  int count =(gender=='g'?1:0);
  
    for( i=count; i<number_of_students; i+=2){
    sum += *(marks+i);
   }
  
  return sum;
}


// we can't edit below of this
int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}