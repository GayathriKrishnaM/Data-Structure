#define MAX 50
#include<stdio.h>
#include<conio.h>
void create(int set[]);
void print(int set[]);
void Union_Bitstrings(int set1[],int set2[],int n);
void Intersection_Bitstrings(int set1[],int set2[],int n);
void Difference_Bitstrings(int set1[],int set2[],int n);
int member_Bitstrings(int set[],int x);
void main()
{
    int set1[MAX],set2[MAX],set3[MAX];
    int x,op;
    set1[0]=set2[0]=set3[0]=0;
    do
    {
        printf("\n1.Create\n2.Print\n3.Union Bitstring\n4.Intersection Bitstring\n5.Difference Bitstring");
        printf("\nEnter your choice:");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
             printf("\nCreate first set:");
             create(set1);
             printf("\nCreate second set:");
             create(set2);
             break;
            case 2:
             printf("\nFirst set is:");
             print(set1); 
             printf("\nSecond set is:");
             print(set2);
             break;
            case 3:
             Union_Bitstrings(set1,set2,n);
             print(n);
             break;
            case 4:
             Intersection_Bitstrings(set1,set2,n);
             print(n);
             break;
            case 5:
             Difference_Bitstrings(set1,set2,n);
             print(n);   
             break;   
        }
    printf("Press any key");
    getch();
    } 
while(op!=6);
}
void create(int set[])
{
    int n,i,x;
    set[0]=0;
    printf("\nNo. of elements in the set:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=1;i<=n;i++)
    scanf("%d",&set[i]);
    set[0]=n;
}
void print(int set[])
{
    int i;
    int n;
    n=set[0];
    printf("\n Set is:");
    for(i=1;i<=n;i++)
    printf("%d",set[i]);
}
void Union_Bitstrings(int set1[],int set2[],int n)
{ 
    int Union_Result[n];
    for(i=1;i<n;i++)
    {
        Union_Result[i]=set1[i]|set2[i];
    }
    printf("Union:");
    for(i=1;i<n;i++)
    {
        printf("%d",Union_Result[i]);
    }
    printf("\n");
}        
void Intersection_Bitstrings(int set1[],int set2[],int n)       
{
    int Intersection_Result[n];
    for(i=1;i<n;i++)
    {
        Intersection_Result[i]=set1[i]&set2[i];
    }
    printf("Intersection:");
    for(i=1;i<n;i++)
    {
        printf("%d",Intersection_Result[i]);
    }
    printf("\n"); 
}
void Difference_Bitstrings(int set1[],int set2[],int n)
{ 
    int Difference_Result[n];
    for(i=1;i<n;i++)
    {
        Difference_Result[i]=set1[i]&(~set2[i]);
    }
    printf("Difference:");
    for(i=1;i<n;i++)
    {
        printf("%d",Difference_Result[i]);
    }
    printf("\n"); 
}    
    int n;
    printf("Enter the number of bits");
    scanf("%d",&n);
    int set1[n],set2[n];
    printf("Enter the Bitstring(0s and 1s);");
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&set1[i]);
    }
    printf("Enter the second Bitstring(0s and 1s):");
    {
        scanf("%d",&set2[i]);
    }


