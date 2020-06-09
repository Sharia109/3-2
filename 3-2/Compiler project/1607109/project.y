
%{

	#include<stdio.h>
	#include<math.h>
	#include <string.h>
	int sym[26],check[26];
        int u=0;
        extern FILE *yyin;
	extern FILE *yyout;
%}


%token NUM ID INT INTMAIN FLOAT ELIF CASEE LEAPYEAR CASE DEFAULT CHAR AT IF ELSE LEFT_BRACKET  RIGHT_BRACKET POWER COL LEFT_PARENTHESIS RIGHT_PARENTHESIS VOIDMAIN COMMA SIN COS TAN FACTORIAL SEME PLUS MINUS ASSIGN EQUAL RETURN MULT DIV LESS GREATER LE GE NE SWITCH WHILE MODULAR FOR
%nonassoc IFX
%nonassoc ELSE
%nonassoc FOR
%left LESS GREATER
%left PLUS MINUS
%left MULT DIV
%left MODULAR
%right POWER
  


%%

program: VOIDMAIN LEFT_PARENTHESIS RIGHT_PARENTHESIS LEFT_BRACKET stat RIGHT_BRACKET { printf("\n<<Compilation Successful!!!>>\n\n"); }
		|  INTMAIN LEFT_PARENTHESIS RIGHT_PARENTHESIS LEFT_BRACKET stat RIGHT_BRACKET { printf("\n<<Compilation Successful!!!>>\n\n"); }
	 ;

stat: 
	| stat cstatement
	;


cstatement:

	| cstatement statement
	
	| cdeclaration
	;
	
	
cdeclaration: TYPE ID1 SEME	{ printf("\nvalid declaration\n"); }
			;
			
TYPE : INT

     | FLOAT

     | CHAR
	 
     ;

ID1  : ID1 COMMA ID	{
						if(check[$3] == 1)
						{
							printf("\nMultipe variable declaration and %c is already declared here\n", $3+97);
						}
						else
						{
							check[$3] = 1;
						}
			}

     |ID	{
				if(check[$1] == 1)
				{
					printf("\n%c is already declared\n", $1+97);
				}
				else
				{
					check[$1] = 1;
				}
			}
     ;


statement: SEME

	| expression SEME			{ printf("\nvalue of expression: %d\n", $1); }

        | ID ASSIGN expression SEME 		{ 
		
		               if(check[$1] == 1)
						{
							sym[$1] = $3; 
							printf("\nValue of the variable %c : %d\t\n",$1+97,$3);
						}
		               else 
					    {
                        	printf("\n%c is not declared\n", $1 + 97);				
						}
						
						}

	| IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS expression SEME %prec IFX {
								if($3) 
								{
									printf("\nvalue of expression in IF: %d\n",$5);
								}
								else
								{
									printf("\ncondition value zero in IF block\n");
								}
							}

	| IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS expression SEME ELSE expression SEME {
								 	if($3)
									{
										printf("\nvalue of expression in IF: %d\n",$5);
									}
									else
									{
										printf("\nvalue of expression in ELSE: %d\n",$8);
									}
								   }
    | IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS expression SEME ELIF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS expression SEME ELSE expression SEME

                                                       {
                                                        if($3)
                                                        {
                                                            printf("\nValue of expression in IF : %d\n",$5);
                                                        }
                                                        else if($9)
                                                        {
                                                            printf("\nValue of expression in ELIF : %d\n",$11);
                                                        }
                                                        else
                                                        {
                                                            printf("\nValue of expression in ELSE : %d\n",$14);
                                                        }
                                                    }

    | WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS  {
										int i;
                                                                                printf("\nValue of while loop: ");
										for(i=1;i<=$3;i++)
										{
											printf("%d ",i);
										}
										printf("\n");
										}
    | FOR  LEFT_PARENTHESIS expression LESS expression RIGHT_PARENTHESIS {
										int i;
                                                                                printf("\nValue of for loop: ");
										for(i=$3;i<$5;i++)
										{
											printf("%d ",i);
										}
										printf("\n");
										}
    | FOR  LEFT_PARENTHESIS expression GREATER expression RIGHT_PARENTHESIS {
										int i;
                                                                                printf("\nValue of for loop: ");
										for(i=$3;i>$5;i--)
										{
											printf("%d ",i);
										}
										printf("\n");
										}

    | FOR  LEFT_PARENTHESIS expression LE expression RIGHT_PARENTHESIS {
										int i;
                                                                                 printf("\nValue of for loop: ");
										for(i=$3;i<=$5;i++)
										{
											printf("%d ",i);
										}
										printf("\n");
										}
    | FOR  LEFT_PARENTHESIS expression GE expression RIGHT_PARENTHESIS {
										int i;
                                                                                 printf("\nValue of for loop: ");
										for(i=$3;i>=$5;i--)
										{
											printf("%d ",i);
										}
										printf("\n");
										}
  | SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS LEFT_BRACKET swit RIGHT_BRACKET  { printf("\nEnd of switch case block\n\n"); }

  | SIN LEFT_PARENTHESIS expression RIGHT_PARENTHESIS {
	             double val,PI,RS;
			     PI=3.1418;
				 val = PI/180;
				 RS = sin($3*val);
				 printf("\n value of sin : %lf\n",RS);
              }
 | COS LEFT_PARENTHESIS expression RIGHT_PARENTHESIS {
	             double val,PI,RS;
			     PI=3.1418;
				 val = PI/180;
				 RS = cos($3*val);
				 printf("\n value of cos : %lf\n",RS);
              }
 | TAN LEFT_PARENTHESIS expression RIGHT_PARENTHESIS {
	             double val,PI,RS;
			     PI=3.1418;
				 val = PI/180;
				 RS = tan($3*val);
				 printf("\n Value of tan : %lf\n",RS);
              }
 | FACTORIAL LEFT_PARENTHESIS expression RIGHT_PARENTHESIS          {
                                            int i,res = 1;
                                            for(i=1;i<=$3;i++)
                                            {
                                                res *= i;
                                            }
                                            printf("\n Value of factorial : %d\n",res);
                                        }
 |LEAPYEAR  LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEME    
                                     {    
                                            if((($3%4==0) && ($3%100!=0)) || ($3%400 ==0))
                                            {
                                                printf("\n%d is leap year\n",$3);
                                            }
                                            else
                                            {
                                                printf("\n%d is not leap year\n",$3);
                                            }
                                        } 

		

  | AT ID TYPE LEFT_PARENTHESIS RIGHT_PARENTHESIS LEFT_BRACKET func RIGHT_BRACKET { printf("\nFunction declared\n"); }
  
  | AT ID LEFT_PARENTHESIS RIGHT_PARENTHESIS SEME  { printf("\nFunction call\n"); }




	;


func: func funcs
     | INT ID SEME   { printf("\nVariable declared inside function\n"); }
     | INT ID COMMA ID   { printf("\nVariable declared inside function\n"); }
     ;
funcs:  ID ASSIGN expression SEME  { printf("\nValue assigned in the variable and the result is : %d\n",$3); }
     ;






                      swit:         first   
				 | first OTHER 
				 ;

			first   : 
				 | first second     
				 ;

			second   : CASE NUM COL expression SEME   {
				
						if($2==2){
							  u=1;
							  printf("\nSWITCH CASE EXECUTION-->\n");
							  printf("\nCASE VALUE : %d  and ANSWER :  %d\n",$2,$4);
						}
					}
				 ;

			OTHER    : DEFAULT CASEE NUM SEME    {
						if(u==0){
						    printf("\nSWITCH CASE EXECUTION-->\n");
							printf("\nResult in DEFAULT CASE Value is :  %d\n",$3);
						}
					}
                                 ;
    

expression: NUM				{ $$ = $1; 	}

	| ID { 
	
	        if(check[$1] == 1)
			{
			    $$ = sym[$1];
			}
		    else 
			{
                printf("\n%c is not declared\n", $1 + 97);				
			}

         }

	| expression PLUS expression	{ $$ = $1 + $3; }

	| expression MINUS expression	{ $$ = $1 - $3; }

	| expression MULT expression	{ $$ = $1 * $3; }

	| expression DIV expression	{ 	if($3) 
				  		{
				     			$$ = $1 / $3;
				  		}
				  		else
				  		{
							$$ = 0;
							printf("\ndivision by zero\t");
				  		} 	
				    	}
    | expression MODULAR expression	{ $$ = $1 % $3; }

	| expression POWER expression { $$ = pow($1,$3); }   

	| expression LESS expression	{ $$ = $1 < $3; }

	| expression GREATER expression	{ $$ = $1 > $3; }

	| expression LE expression	{ $$ = $1 <= $3; }

	| expression GE expression	{ $$ = $1 >= $3; }

    | expression NE expression	{ $$ = $1 != $3; }

	| LEFT_PARENTHESIS expression RIGHT_PARENTHESIS		{ $$ = $2;	}
        	  
 
	;	 
	 
%%

int yywrap()
{
return 1;
}


yyerror(char *s){
	printf( "%s\n", s);
}
