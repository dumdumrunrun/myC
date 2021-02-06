object = hello.o my_math.o

hello : $(object)
	clang -g -Wall -std=c99 -o hello $(object)


hello.o : my_math.h

my_math.o : my_math.h

.PHONY:clean

clean :
	rm hello $(object)