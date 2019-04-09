#include <stdio.h>
int main(int argc, char const *argv[]) {
    //read the assignment and project score
    float assignment1, assignment2, project;printf("what is your score in assignment 1, assignment 2 and project ? " );scanf("%f%f%f", &assignment1, &assignment2, &project);float final_result = assignment1*0.25+assignment2*0.25+project*0.5;printf("Your final result is %.2f \n", final_result );
    return 0;
}
