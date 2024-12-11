
// To pass structure using call by address function implementing struct and function in c ;

#include <stdio.h>
#include <stdlib.h>
struct dob {
int day;
int month;
int year;
};

struct student_info {

int roll_no;
char name[50];
float CGPA;
struct dob age;

};


void printStudentInfoValue(struct student_info student);
void printStudentInfoAddress(struct student_info *student);


int main() {

struct student_info student1 = {21, "Sanjay", 6.5, {22, 7, 2004}};
printf("printing student info call by value\n ");
printStudentInfoValue(student1);

printf("printing student info call by Address\n ");
printStudentInfoAddress(&student1);

return 0;
}

void printStudentInfoValue(struct student_info student){
printf("Roll-No: %d \n", student.roll_no);
printf("Name: %s \n", student.name);
printf("CGPA: %d\n", student.CGPA);
printf("dob is %d-%d-%d\n", student.age.day, student.age.month, student.age.year);
}

void printStudentInfoAddress(struct student_info *student) {
printf("Roll-No: %d \n", student->roll_no);
printf("Name: %s \n", student->name);
printf("CGPA: %d\n", student->CGPA);
printf("dob is %d-%d-%d\n", student->age.day, student->age.month, student->age.year);

}