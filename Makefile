CC = gcc

#here SRCS stores all .c files
SRCS := $(wildcard *.c)

<<<<<<< HEAD
# $(var : a = b) It tells that takes value of variable var and replace .a extension with .b
BINS := $(SRCS : %.c = %.o) 


all = ${BINS}


#creating .out files from .o files using command gcc filename.o -o filename.out
#%:%.o
#	$(CC) $< -o $@

#creating .o files from .c files using command gcc -c filename
%.o : %.c
	${CC} -c $<
remove:
	rm -rf *.o
=======
clean:
	rm -rf *.o result
>>>>>>> master
