pre = bubble_sort.o

bubble_sort : $(pre)
	clang -g -Wall -std=c99 -o bubble_sort $(pre)

assert.o : assert.h

stdbool.o : stdbool.h

stdio.o : stdio.h

stdlib.o : stdlib.h

time.o : time.h

.PHONY:clean
clean :
	rm bubble_sort $(pre)