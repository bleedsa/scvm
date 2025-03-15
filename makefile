all: scvm

CC = gcc
CFLAGS = -O3 -Wall
O = o

$(O):
	mkdir -p $(O)

size: $(O) src/size.c $(O)/*.o src/*.h
	$(CC) $(CFLAGS) -o $(O)/size src/size.c
	@$(O)/size

C = $(CC) $(CFLAGS) -c -o
$(O)/*.o: $(O) src/*.c src/*.h
	$(C) $(O)/asm.o	src/asm.c
	$(C) $(O)/vm.o	src/vm.c
	$(C) $(O)/0.o	src/0.c

scvm: $(O)/*.o
	$(CC) $(CFLAGS) -o $(O)/scvm $(O)/*.o
	
run: all
	@$(O)/scvm
	
clean:
	rm -rf $(O)
