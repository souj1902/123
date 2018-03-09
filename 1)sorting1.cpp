#include<iostream>
using namespace std;
int arr1[6];
class sorting
{
int arr[6];
public:
void qusort();
void quicksort(int ,int );
void mergesort();
void merge_sort(int , int );
void merge_array(int , int , int , int );
void inssort();
void setter();
void getter();
};
//INSERTION SORT
 void sorting::inssort()
{
	for(int i=0;i<6;i++)
	{
	arr1[i]=arr[i];
	}
int j,temp;
for(int i=1; i<6; i++)
	{
		temp=arr1[i];
		j=i-1;
		while((temp<arr[j]) && (j>=0))
		{
			arr1[j+1]=arr1[j];
			j=j-1;
		}
		arr1[j+1]=temp;
	}

}

//MERGE SORT
 void sorting::mergesort()
{
	for(int i=0;i<6;i++)
	{
	arr1[i]=arr[i];
	}


}

void sorting::merge_sort(int i, int j) 
{
    int m;

    if (i < j) 
    {
        m = (i + j) / 2;
        merge_sort(i, m);
        merge_sort(m + 1, j);
        merge_array(i, m, m + 1, j);
    }
}

void sorting::merge_array(int a, int b, int c, int d) 
{
    int t[50];
    int i = a, j = c, k = 0;

    while (i <= b && j <= d) 
    {
        if (arr1[i] < arr1[j])
            t[k++] = arr1[i++];
        else
            t[k++] = arr1[j++];
    }


    while (i <= b)
        t[k++] = arr1[i++];

    while (j <= d)
        t[k++] = arr1[j++];

    for (i = a, j = 0; i <= d; i++, j++)
        arr1[i] = t[j];
}

//QUICKSORT
void sorting::qusort()
{

	for(int i=0;i<6;i++)
	{
	arr1[i]=arr[i];
	}
}
void sorting::quicksort(int low,int high)
{
 	
	int pivot,j,temp,i;
	 if(low<high)
	 {
	  pivot = low;
	  i = low;
	  j = high;
	 
	  while(i<j)
	  {
	   while((arr1[i]<=arr1[pivot])&&(i<high))
	   {
	    i++;
	   }
	 
	   while(arr1[j]>arr1[pivot])
	   {
	    j--;
	   }
	 
	   if(i<j)
	   { 
	    temp=arr1[i];
	    arr1[i]=arr1[j];
	    arr1[j]=temp;
	   }
	  }
	 
	  temp=arr1[pivot];
	  arr1[pivot]=arr1[j];
	  arr1[j]=temp;
	  quicksort(low,j-1);
	  quicksort(j+1,high);
	 }
}


//GETTER AND SETTER
void sorting::setter()
{
cout<<"Enter the elements into the array\n";
for(int i=0;i<6;i++)
	{
	 cin>>arr[i];
	}
}


void sorting::getter()
{
cout<<"the sorted elements are:"<<endl;
	for(int i=0;i<6;i++)
	{
	 cout<<arr1[i]<<"\t";
	}	
}




//MAIN PROGRAM

int main()
{
int choice,subchoice;
sorting ob;
ob.setter();
do
{
cout<<"\nEnter \n 1.to perform quicksort \n 2.to perform mergesort \n 3.to perform insertionsort \n 4.Exit\nChoice:";
cin>>choice;
	switch(choice)
	{
	case 1:
	ob.qusort();
	ob.quicksort(0,6-1);
	cout<<"Do you wish the sorted elements to be displayed?  Press 1 for yes,Press 0 for no"<<"\n";
	cin>>subchoice;
		if(subchoice==1)
		{
		ob.getter();
		}
	break;

	case 2:
	ob.mergesort();
	ob.merge_sort(0,6-1);
	cout<<"Do you wish the sorted elements to be displayed?  Press 1 for yes,Press 0 for no"<<"\n";
	cin>>subchoice;
		if(subchoice==1)
		{
		ob.getter();
		}
	break;

	case 3:
	ob.inssort();
	cout<<"Do you wish the sorted elements to be displayed?  Press 1 for yes,Press 0 for no"<<"\n";
	cin>>subchoice;
		if(subchoice==1)
		{
		ob.getter();
		}
	break;

	case 4:
	cout<<"\nExiting program";
	break;

	default :
	cout<<"Wrong choice,try again\n";
	break;
	}

}while(choice!=4);
};
