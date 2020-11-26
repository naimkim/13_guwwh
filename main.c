#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	struct student[10]{
		char name[100]; 
		int ID;
		double grade;
	};
int main(int argc, char *argv[]) {
	
	struct student s1 = { 123456, "naim kim", 4.3};
	
	s1.ID = 456123;
	s1.grade = 4.5;
	
	printf("ID : %d\n", s1.ID);
	printf("name : %d\n", s1.name);
	printf("grade : %d\n", s1.grade);
	
	return 0;
}
