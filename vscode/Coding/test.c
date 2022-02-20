#include<stdio.h>

struct NKS_people
{
char NKS_name[50];
int NKS_age;
char NKS_sex;
char NKS_dob[50];
};
void display(struct NKS_people a[5])
{
int i;
for(i=0;i<5;i++)
{
if(a[i].NKS_sex=='f'||a[i].NKS_sex=='F')
{
printf("%d-%s-%d-%s\n",i+1,a[i].NKS_name,a[i].NKS_age,a[i].NKS_dob);
}
}
}
int main()
{
struct NKS_people a[5];
for(int i=0;i<5;i++)
{
printf("data for %d people=\n",i+1);
scanf("%s",a[i].NKS_name);
scanf(" %d",&a[i].NKS_age);
scanf(" %c",&a[i].NKS_sex);
scanf(" %s",a[i].NKS_dob);
}
display(a);
return 0;
}