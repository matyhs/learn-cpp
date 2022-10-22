all: build
build: overload.o person.o
	clang++ overload.o person.o -o overload
person.o: person.h person.cpp
	clang++ -c -Wall -Wextra -Wpedantic -Werror person.cpp -o person.o
overload.o: person.h overload.cpp
	clang++ -c -Wall -Wextra -Wpedantic -Werror overload.cpp -o overload.o
