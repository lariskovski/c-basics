CC=gcc

comp:
	$(CC) ./facto/facto.c -o ./libfacto.so -fpic -shared	# Creates shared lib
	echo "Starting compilation."
	$(CC) -c ./main.c -o ./main.o			# Compiles intermediate file .o
	$(CC) ./main.o -o ./main -lfacto -L.	# Links compiled code to lib and creates the exec

run:
	LD_LIBRARY_PATH=. ./main

clean:
	rm ./main
	rm ./*.so
	rm ./*.o