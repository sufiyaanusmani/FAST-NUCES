#include <stdio.h>
#include <stdlib.h>

struct Emp {
	int id;
	int *taskIDs;
	int timeAssigned;
	int timeLogged;
};

void AssignTask(struct Emp *, int);
int main() {
	struct Emp employee;
	int size, tId;
	printf("Enter logged in time: ");
	scanf("%d", &employee.timeLogged);
	printf("Enter task id: ");
	scanf("%d", &tId);
	AssignTask(&employee, tId);
	return 0;
}

void AssignTask(struct Emp *empPtr, int tskID){
	printf("Enter Employee ID to assign this task: ");
	scanf("%d", &empPtr->id);
	empPtr->taskIDs = &tskID;
	if(tskID == 1){
		empPtr->timeAssigned = empPtr->timeLogged + 16;
	}else if(tskID == 2){
		empPtr->timeAssigned = empPtr->timeLogged + 8;
	}else{
		empPtr->timeAssigned = empPtr->timeLogged + 3;
	}
	
	printf("Task %d successfully assigned to Employee %d and this task will be done in %d\n", *empPtr->taskIDs, empPtr->id, empPtr->timeAssigned);
}
