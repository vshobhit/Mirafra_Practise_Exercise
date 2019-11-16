
all : result
result: *.o
	gcc $? -o $@

%.o :  %.c
	gcc -c $?
clean:	
	rm -rf *.o 
