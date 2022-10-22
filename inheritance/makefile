all: build
build: polymorphism.o person.o metaperson.o
	clang++ polymorphism.o person.o metaperson.o -o polymorphism
metaperson.o: metaperson.h metaperson.cpp person.h
	clang++ -c -std=c++20 -Wall -Wextra -Wpedantic -Werror metaperson.cpp -o metaperson.o
person.o: person.h person.cpp
	clang++ -c -std=c++20 -Wall -Wextra -Wpedantic -Werror person.cpp -o person.o
polymorphism.o: metaperson.h polymorphism.cpp
	clang++ -c -std=c++20 -Wall -Wextra -Wpedantic -Werror polymorphism.cpp -o polymorphism.o