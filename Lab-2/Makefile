SRC = $(wildcard ./Source/*.cpp)

./Bin/Lab_2: ${SRC} | ./Bin/
	g++ -std=c++17 $^ -o $@

./Bin/:
	mkdir Bin

.PHONY: clean
clean:
	rm -rf ./Bin
