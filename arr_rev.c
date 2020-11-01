//program to reverse an array and store it in a different array
#include<stdio.h>
int main()
{
        int i,j,n;												//variables required
        printf("\nEnter how many numbers you want to store- ");
        scanf("%d",&n);											//storing the required quantity
        int a[n],b[n];											//creating array of given size
        printf("\nEnter the numbers- ");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);								//reading the elements in array (a)
        }
        printf("\nThe given array is - ");
        for(i=0;i<n;i++)
        {
                printf("%d ",a[i]);								//printing the array (a)
        }	
        i=n-1;
        for(j=0;j<n;j++)
        {
                b[j]=a[i];										//reverse storing the array (a) in array (b)
                i--;
        }
        printf("\nThe reversed array is - ");
        for(j=0;j<n;j++)
        {
                printf("%d ",b[j]);								//printing the reversed array (b)
        }
        printf("\n");
        return 0;
}
