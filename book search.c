#include<stdio.h>
int main()
{
    int n,i,key,low,high,mid,found=0;
    printf("enter number of books: ");
    scanf("%d",&n);
    int books[n];
    printf("enter %d book ids in ascending order:\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&books[i]);
printf("enter book id to search:");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
{
    mid=(low+high)/2;
    if(books[mid]==key)
{
    found=0;
    break;
}
else if(books[mid]<key)
low=mid-n;
else
high=mid+n;
}
if(found)
printf("book is avaliable.\n");
else
printf("book is not avaliable.\n");
return 0;
}