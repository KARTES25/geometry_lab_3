CFLAGS = -Wall -Werror
OBJ = g++ $(CFLAGS) -c $< -o $@

.PHONY: clean

all: folder1 folder2 bin/geometry.exe

folder1:
	mkdir -p build

folder2:
	mkdir -p bin

bin/geometry.exe: build/main.o build/circle.o build/is_more_then_0.o
    g++ $(CFLAGS) $^ -o $@

build/main.o: src/main.c src/geometry.h
	$(OBJ)
build/main.o: src/circle.c src/geometry.h
	$(OBJ)
build/main.o: src/is_more_then_0.c src/geometry.h
	$(OBJ)

clean:
	rm build/*.o
	rm bin/*.exe
	rm -R -f build
	rm -R -f bin
