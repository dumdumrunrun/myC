# object = hello.o my_math.o
object = reverse_integer.o

reverse_integer : $(object)
	clang -g -Wall -std=c99 -o reverse_integer $(object)

.PHONY:clean

clean :
	rm reverse_integer $(object)