#include <stdio.h>


int SIZE,max;


/*Yigit Rahim Kuru Eglencesine Kodlar*/

int main()
{
	printf("Bir sayi giriniz = ");
	scanf("%d", &SIZE);
	int a[SIZE];
	for( int i =0 ; i<SIZE ; i++)
	{
		int numb ;	
		printf("%d .sayiyi giriniz :",i+1);
		scanf("%d",&numb);
		a[i]=numb;				
	}
    for( int i =0;i<SIZE;i++)
    {   
      for(int i =0 ;i<SIZE-1;i++)
      {
       if(a[i]>=a[i+1])
       {
       	max=a[i];
       	a[i]=a[i+1];
       	a[i+1]=max;
	   }
	  }	  
	}
	printf("dizinin son hali =\n");
	for(int i=0;i<SIZE;i++)
	{
		printf("%d\n",a[i]);
	}
	
	return 0 ;
}
