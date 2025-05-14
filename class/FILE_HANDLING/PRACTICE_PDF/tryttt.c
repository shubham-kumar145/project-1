#include<stdio.h>
#include<string.h>
struct student{
	char name[20];
	int roll_no;
	float marks;
};
int main(){
	FILE *ptr = fopen("students.txt","w");
	int n;
	printf("enter the total no student");
	scanf("%d",&n);
	struct student arr[n];
	for(int i = 0 ; i < n ; i ++){
		printf("name: ");
		getchar();
		gets(arr[i].name);
		printf("roll no: ");
		scanf("%d",&arr[i].roll_no);
		printf("marks: ");
		scanf("%f",&arr[i].marks);
		fprintf(ptr,"%s  %d  %f\n",arr[i].name,arr[i].roll_no,arr[i].marks);
	}
	fclose(ptr);
	char str[50];
	int count =0,size =0,dup = 0;
	char str1[50];
	char str2[50];
	FILE *ptr2 = fopen("students.txt","r");
	while(fgets(str2,50,ptr2)){
		FILE *ptr1 = fopen("students.txt","r");
		fscanf("%s",&str);
		while(fgets(str1,50,ptr1)){
			fscanf("%s",&str1);
			int a = strlen(str);
			if(a == strlen(str1)){
				if(str[count] == str1[count]){
					size++;
				}
				if(size == a){
					dup++;
				}
				count++;
			}
		}
		fclose(ptr1);
		if(dup >=2 ){
			puts(str2);
		}
		else{
			printf("not fount");
		}
	}
	return 0;
}


