all: build
build: smartptr.o person.o
	clang++ smartptr.o person.o -o smartptr
person.o: resource.h person.h person.cpp
	clang++ -c -std=c++20 -Wall -Wextra -Wpedantic -Werror person.cpp -o person.o
smartptr.o: person.h smartptr.cpp
	clang++ -c -std=c++20 -Wall -Wextra -Wpedantic -Werror smartptr.cpp -o smartptr.o