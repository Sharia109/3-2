%{
	#include<stdio.h>
	#include "project.tab.h"
	#include<stdlib.h>
	#include <string.h>
        extern YYSTYPE yylval;
	   
%}

header   include[' '][a-z]*.header[' ']

%%

"int"	{ return INT; }
"float"	{ return FLOAT; }
"char"	{ return CHAR; }

[0-9]+	{ 
		yylval = atoi(yytext);
		return NUM;
	}

[a-z]	{
		yylval = *yytext - 'a';
		return	ID;
	}
	
"void main"	{ return VOIDMAIN; }
"int main"	{ return INTMAIN; }

"if"		{ return IF;		}
"else"		{ return ELSE;		}
"elif"           {return ELIF;}
"while"    {return WHILE;} 
"forloop" {return FOR;}
"switch"       { return SWITCH; }    
"{" { return LEFT_BRACKET;}
"}" {return RIGHT_BRACKET;}
"(" {return LEFT_PARENTHESIS;}
")" {return RIGHT_PARENTHESIS;}
"$" {return SEME;}
":" {return COL;}
"@" {return AT;}
"cm" {return COMMA;}
"CASEE"  {return CASEE;}
"CASE"  {return CASE;}
"DEFAULT" {return DEFAULT;}
[+][+] {return PLUS;}
[-][-] {return MINUS;}
[*][*] {return MULT;}
[/][/] {return DIV;}
[<][-] {return ASSIGN;}
"pow" {return POWER;}
"return" {return RETURN;}
[=][=][=] {return EQUAL;}
"LT" {return LESS;}
"GT" {return GREATER;}
">=" { return GE; }
"<=" { return LE; }
"!=" { return NE; }
"%%" {return MODULAR;}
{header} {printf("\nHeader file \n");}
"~".*  { fprintf(yyout,"\n ~~Single Line Comment\n");}
"&"[^&]+"&"  {fprintf(yyout,"\n **Multiline Comment\n");}
"sine"		{ return SIN; }
"cosine"		{ return COS; }
"tan"   {return TAN;}
"factorial" {return FACTORIAL;}
"leapyear"  {return LEAPYEAR; }
"RETURN"  {fprintf(yyout,"\n<*Return from main function*>\n");}

[ \t\n]*	;

%%

int main()
{
	yyin = freopen("input.txt","r",stdin);
	yyout = freopen("output.txt","w",stdout);
	yyparse();

}