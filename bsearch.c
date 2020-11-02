//Program to search an element in an array using binary search
#include<stdio.h>
int binary(int a[], int n, int k)                                       //function for binary search
{
        int ll=0,ul=n-1,mid;                                            //variables required (ll= lower limit, ul= upper limit)
        while(ll<=ul)                                                   //traversing through the array
        {
                mid=(ll+ul)/2;                                          //setting mid element
                if(k==a[mid])                                           //checking if element is found
                {
                        return mid;                                     //returning the position if found
                        break;
                }
                else if(k>a[mid])                                       //if the search element is greater than the mid element, resetting ll as mid+1
                        ll=mid+1;
                else                                                    //if the search element is less than the mid element, resetting ul as mid-1
                        ul=mid-1;
        }
        return -1;                                                      //if element not found
}
int main()
{
    int n,i,key,flag;                                                   //variables required
    printf("\nHow many elements do you want to enter- ");
    scanf("%d",&n);                                                     //reading the size of the array
    int a[n];                                                           //declaring the array
    printf("\nEnter the elements in  ascending order- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);                                              //reading the elements in ascending order
    }
    printf("\nEnter the element to be searched- ");
    scanf("%d",&key);                                                   //reading the element to be searched
    flag=binary(a,n,key);                                               //calling the function ad storing it's result in flag
    if(flag!=-1)                                                        //if element is found
    {
        printf("\nElement found at position %d or index %d\n",flag+1,flag);    //displayin the position of the element
    }
    else                                                                //if element not found
    {   
        printf("\nElement not found\n");                                //displaying element not found
    }   
    return 0;
}