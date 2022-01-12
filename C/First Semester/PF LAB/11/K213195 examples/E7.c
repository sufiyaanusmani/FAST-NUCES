#include <stdio.h>
#include <string.h>

struct UniversityDetails {
	int UniRanking;
	char UniName[90];
};
struct student_detail {
	int std_id;
	char std_name[20];
	float std_percentage;
	struct UniversityDetails data;
};
int main() {
	struct student_detail std_data = {1, "Ali", 85.5, 220, "FAST-NUCES"};
	printf("Id is: %d \n", std_data.std_id);
	printf("Name is: %s\n", std_data.std_name);
	printf("Percentage is: %f\n\n", std_data.std_percentage);

	printf("Uni Rank is: %d\n", std_data.data.UniRanking);
	printf("Uni Name is: %s\n", std_data.data.UniName);
	return 0;
}