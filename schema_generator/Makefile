CC = g++

objects = md5.o console_main.o
bin = keygen

all:main

main:$(objects)
	$(CC) -o $(bin) $(objects)

.PHONY: clean
clean:
	rm -f $(objects) $(bin)
