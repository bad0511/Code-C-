#include <stdio.h>
#include<math.h>

int main()
{
	int a,b;
	scanf("%d%d", &a, &b);
	for ( int i=1 ; i<=a ; i++ ) 
    {
	    for ( int j=1 ; j<=b ; j++ ) 
        {
	        if ( b > a ) 
            {
	            if ( abs(i-b) > abs(j-b) ) 
				    printf ("%c",abs(i-b)+1+96);
			    else 	 	
				    printf ("%c",abs(j-b)+1+96);
	        } 
            else 
            {
	            if ( abs(i-a) > abs(j-a) ) 
				    printf ("%c",abs(i-a)+1+96);
			    else 	 	
				    printf ("%c",abs(j-a)+1+96);
	        }
	    }
	    printf ("\n");
	}
	return 0;
}
