#include<stdio.h>  // header file
/*
A FUNCTION THAT REVERSES
A NUMBER.IT DIVIDES A NUMBER BY TEN
AND STORES IT IN VARIABLE "remainder"
,then it add the remainder to variable "reversed".
it then divides the quotient with ten and add the remainder to reversed
,like that,like that
*/
int reverse(int num)
{
	
	int reversed = 0, remainder;
	while (num != 0) {
    	remainder = num % 10;
    	reversed = reversed * 10 + remainder;
    	num /= 10;
  	}
  	return reversed;
}

/*A FUNCTION THAT FINDS
THE PRIME NUMBERS
*/
int primeN(int num)
{
	/*
	AT THE BEGINNING OF THE FUNCTION IS THE DECLARATION OF VARIABLES.
	THE FUNCTION FIRST CHECKS IF THE NUMBER IS ZERO OR
	ONE,THEN IT ITERATES FOR HALF THE NUMBER CHECKING WHETHER
	THE NUMBER IS DIVISBLE BY ANY OTHER NUMBER.
	THE PROGRAM RETURNS THE NUMBER THAT IS NEITHER ZERO OR 1
	AND IT IS DIVISIBLE BY ONE AND ITSELF ONLY
	*/
	int flag =0;  
	if (num == 0 || num == 1)
   		flag = 1;

  for (int i = 2; i <= num / 2; ++i) {

    if (num % i == 0) {  
      flag = 1;
      break;
    }
    else 
    	flag = 0;
	}
}

int main()
{
	/*
	FIRST,THE COUNT AND X ARE INITIALISED TO ZERO
	THE LOOP FIRST CHECKS IF A NUMBER IS PRIME,THEN
	IT SQUARES THE PRIME NUMBER.IT THEN REVERSES THE
	PRIME SQUARE.AFTERWARDS IT CHECKS IF THE PRIME SQUARE
	IS PALINDROME.WHAT FOLLOWS IS THE CHECKING OF WHETHER
	THE REVERSED PRIME SQUARE IS PERFECT,AND WHETHER ITS ROOT
	ARE PRIME.IT THEN PRINTS THE FIRST TEN SQUARES FOLLOWING THE CRITERIAS
	ABOVE
	*/
	int count=0,x=0,Reversed;
	for(x=0;count<10;x++)
	{
		if(primeN(x))
		{
			int square;
			square=x*x;
			Reversed=reverse(square);
			if(square!=Reversed)
			{
				int root;
				for(root=0;root<=Reversed/2;root++)
				{
					if(root*root==Reversed)
					{
						if(primeN(root))
						{
							printf("%d\n",square);
							count++;
						}
					}
				}
			}
		}
	}
	return 0;
}





