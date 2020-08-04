object = hello.o my_math.o

hello : $(object)
	clang -g -Wall -std=c99 -o hello $(object)


hello.o : hello.c my_math.c
	clang -c hello.c


.PHONY:clean

clean :
	rm hello $(object)