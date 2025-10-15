#
#       Makefile for Lab 6
#       Compiler
#       Austin Matthys
#       Sept 12, 2025
#
#	

all:	lab6

lab6:   lab6.l lab6.y ast.c ast.h
	lex lab6.l
	bison -d lab6.y
	gcc -o lab6 lab6.tab.c lex.yy.c ast.c

clean:
	rm -f lab6