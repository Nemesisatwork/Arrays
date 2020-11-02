#include <stdio.h>
int linear(int a[], int n, int k)                                           //function for linear search
{
        int i;
        for(i=0;i<n;i++)                                                    //traversing through the array
        {
                if(k==a[i])                                                 //if element found
                {
                        return i;                                           //returning that position at which the element was found
                        break;
                }
        }
        return -1;                                                          //if not found returning -1
}
int main()
{        
        int n,key,i,flag;                                                   //variables required
      
        printf("\nHow many elements do you want to enter- ");
        scanf("%d",&n);                                                     //reading the size of the array
        int a[n];
        printf("\nEnter the elements- ");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);                                          //reading the elements
        }
        printf("\nWhich element would you like to search- ");
        scanf("%d",&key);                                                   //reading the element to be searched
       flag=linear(a,n,key);                                                //calling the function and storing it's return value in flag
       if(flag!=-1)                                                         //if element found
        {
                printf("\nElement found at position %d or index %d\n",flag+1,flag); // displaying the position at which the element was found
        }
        else
        {
                printf("\nElement not found\n");                            //else if element not found
        }
        return 0;
}