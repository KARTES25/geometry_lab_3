CFLAGS = -Wall -Werror
OBJ = g++ $(CFAGS)  -c $< -o $@
.PHONY: clean

folder1:
	mkdir -p build

folder2:
	mkdir -p bin





clean:
	
	rm -r build
	rm -r bin
