
sources= example.c\
         GCD_LCM.c\


headers=GCD_LCM.h\


C_Flags= -std=c11


all:
	gcc $(sources) $(C_Flags)


clean:
	rm *.out
