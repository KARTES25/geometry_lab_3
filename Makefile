CFLAGS = -Wall -Werror
OBJ = g++ $(CFLAGS) -c $< -o $@
TEST = g++ $(GFAGS) -I thirtdparty/catch2 -c $< -o $@
.PHONY: clean

all: folder1 folder2 folder3 folder4 bin/geometry.exe

folder1:
	mkdir -p build

folder2:
	mkdir -p bin

folder3:
	mkdir -p build/src

folder4:
	mkdir -p build/test

bin/geometry.exe: build/src/main.o build/src/circle.o build/src/is_more_then_0.o
	g++ $(CFLAGS) $^ -o $@

build/src/main.o: src/main.c src/geometry.h
	$(OBJ)
build/src/circle.o: src/circle.c src/geometry.h
	$(OBJ)
build/src/is_more_then_0.o: src/is_more_then_0.c src/geometry.h
	$(OBJ)


bin/geometry-test: build/test/test.o build/test/circle.o build/test/is_more_then_0.o
	g++ $(CFLAGS) -I thirtdparty/catch2  $^ -o $@
build/test/test.o: test/test.c test/geometry-test.h

build/test/circle.o:test/circle-test.c test/geometry-test.h

build/test/is_more_then_0.o:test/is_more_then_0.c test/geometry-test.h


clean:
	rm build/*.o
	rm bin/*.exe
	rm -R -f build
	rm -R -f bin
