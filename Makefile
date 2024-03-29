CC = gcc -Wall -pedantic

build_dir: 
	mkdir -p build

element: build_dir
	$(CC) -c element.c -o build/element.o

binary_heap: build_dir
	$(CC) -c binary_heap.c -o build/binary_heap.o

main: element binary_heap
	$(CC) main.c build/element.o build/binary_heap.o -o build/main

clean:
	rm -rf build