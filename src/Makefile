
all: test_terra_genesis

test_terra_genesis : test_terra_genesis.o engines/terra_genesis.o
	gcc -o test_terra_genesis test_terra_genesis.o engines/terra_genesis.o
  

%.o: %.c
	gcc -g -c $^
clean:
	rm *.o
