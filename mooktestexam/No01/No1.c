#include <stdio.h>

#define maxstudent 10
#define maxsubject 5


float calculateStudentAverage(int avengerstudents[],int subject);
char assignGrade(float avgstudent);
void findOverallMinMax(int scores[][maxsubject],int student,int subject,int *max,int *min);

int main() {
	int scores[maxstudent][maxsubject];
	int student,subject,testscore;
	float avgstudent[maxstudent];
	char grade[maxstudent];
	int i,j;
	int max,min;
	
	do{
		printf("Hello how many student (max 10) = ");
		scanf("%d",&student);
		
		printf("how many subject (max 5) = ");
		scanf("%d",&subject);
		
		if(student <= 0 || student > 10 || subject <= 0 || subject > 5){
			printf("Your input incorrect \n");
			printf("Please Try Again\n");
		}
			
	}while(student <= 0 || student > 10 || subject <= 0 || subject > 5);
	
	for(i=0; i<student; i++){
		printf("------------ input your score %d ---------------------\n",i+1);
		for(j=0; j<subject; j++){
			while(1){
				printf("subject %d = ",j+1);
			    scanf("%d",&testscore);
			    
			    if(testscore >= 0 && testscore <= 100){
			    scores[i][j] = testscore;
				break;	
				}else{
					printf("score incorrect\n");
				}
			}
		}
		printf("\n");
	}
	
	printf("-------- Original Student Scorce ----------\n\n");
		for(i=0; i<student; i++){
	     printf("---------------- student %d --------------\n",i+1);
	     for(j=0; j<subject; j++){
	     	printf("Subject %d = %d\n",j+1,scores[i][j]);
		 }
	}
	printf("\n");

	printf("-------- Student Avenger Scorce & Grade ----------\n\n");
	for(i=0; i<student; i++){
	    avgstudent[i] = calculateStudentAverage(scores[i],subject);
	    grade[i] = assignGrade(avgstudent[i]);
	    printf("Student %d avenger score = %.2f\n",i+1,avgstudent[i]);
	    printf("Student %d greade %c\n",i+1,grade[i]);
	    printf("\n");
	}
	printf("\n");
	
	findOverallMinMax(scores,student,subject,&max,&min);
	printf("-------- Max & Min score in class ----------\n\n");
	printf("Scores Max = %d",max);
	printf("\n");
	printf("Scores Min = %d",min);
	
    return 0;
}

float calculateStudentAverage(int avengerstudents[],int subject){
	int sum = 0;
	int j;
	float totalscore;
	
	for(j=0; j <subject; j++ ){
		sum += avengerstudents[j];
	}
	
	totalscore = (float)sum/subject;
	return totalscore;
}

char assignGrade(float avgstudent){
	char n;
	
		if(avgstudent >= 80 && avgstudent <= 100){
			n = 'A';
		}else if(avgstudent >= 70 && avgstudent <= 79){
			n = 'B';
		}else if(avgstudent >= 60 && avgstudent <= 69){
			n = 'C';
		}else if(avgstudent >= 50 && avgstudent <= 59){
		    n = 'D'	;
		}else{
			n = 'F';
		}
		
	return n;
}

void findOverallMinMax(int scores[][maxsubject],int student,int subject,int *max,int *min){
	int i ,j;
	*max = scores[0][0];
	*min = scores[0][0];
	
    if (student <= 0 || subject <= 0){
    	*max = -1;
    	*min = -1;
    	return;
	}
	
	for(i=0; i<student; i++){
		for(j=0; j<subject; j++){
			if(*max < scores[i][j]){
				*max = scores[i][j];
			}
			if(*min > scores[i][j]){
				*min = scores[i][j];
			}
			
	}
   }
}
