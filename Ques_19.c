#include <stdio.h>

	int i,t,j,num_students;           											//n = number of students; t=temp variable for swapping
	int num_gifts[10],students[10],bill[10];
	float cost;


void get()
   {

     printf("\n\n");
     printf("****************** Data Entered by User *****************\n\n");
	 printf( "\nSTUDENT NO.\t\tNO.OF GIFTS PURCHASED \n");

	    for (i = 0; i < num_students; i++)
	      {
		      printf("STUDENT NO. = %d \t\t" ,students[i]);
		      printf("%d \t\t\t",num_gifts[i]);
	          printf("\n\n");
	      }
	}


void billfn()
    {
      printf( "STUDENT_NO\t\tTOTAL GIFTS PURCHASED\t\tBILL\n\n");

	    for (i = 0; i < num_students; i++)
		   {
	           	printf("STUDENT NO. = %d \t\t" ,students[i]);
		        printf("%d \t\t\t",num_gifts[i]);
		        bill[i]= cost * num_gifts[i];
	         	printf("%d \t\t\t",bill[i]);
	            printf("\n");
	       }
    }


void sorting()  
   {

	printf("**********  Order for Billing Students on the basis of number of gifts  ************* \n\n");
	    for(i=0;i<num_students;i++)
          {
    	      for(j=i+1;j<num_students;++j)
			     {
		            if(num_gifts[i]<num_gifts[j])
					{
		                t=num_gifts[i];
                   	    num_gifts[i]=num_gifts[j];
                        num_gifts[j]=t;
                        t=students[i];
                        students[i]=students[j];
                        students[j]=t;
                    }
                 }
}          }


int main()
{

	 printf("Enter the number of students who have purchased gifts from shops        :  ");
     scanf("%d",&num_students);
     printf("Cost of each gift       :  ");
     scanf("%f",&cost);
     printf("\n\n***************  Enter the Number of Gifts Corresponding Students *************");
        for(i=0;i<num_students;i++)
          {
              printf("\nStudent_Number[%d] \n",i+1);
              printf("Enter the number of gifts purchased        :  ");
              scanf("%d",&num_gifts[i]);
              students[i]=i+1;
          }


        get();
        sorting();
        billfn();

}
