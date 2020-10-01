#include<iostream.h>
#include<conio.h>
class bubble_sort
{
 int i,j,small,pos;
 public:
 void sort(int[],int);
 };
 void bubble_sort::sort(int arr[],int size)
 { int n;
 cout<<"the entered array is \n";
 for(i=0;i<size;i++)
 {
  cout<<arr[i]<<"\t";
  }
 for(i=0;i<size;i++)
 {
  for(j=0;j<size-1-i;j++)
  {
   if(arr[j]>arr[j+1])
   {
    n=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=n;
     }
     }
     }
     cout<<"\n the sorted array is\n ";
     for(i=0;i<size;i++)
     cout<<arr[i]<<"\t";
     }
void main()
{
 clrscr();
 int arr[5];
 cout<<"\t *****BUBBLE SORT*****\nEnter the elements into array";
 for(int i=0;i<5;i++)
 cin>>arr[i];
 bubble_sort obj;
 obj.sort(arr,5);
 getch();
 }
