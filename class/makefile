all: build
build: account.o transaction.o savings_account.o main.o
	clang++ main.o account.o transaction.o savings_account.o -o main
savings_account.o: savings_account.cpp savings_account.h account.h
	clang++ -c -std=c++20 -Wall -Wextra -Wpedantic -Werror savings_account.cpp -o savings_account.o
account.o: account.cpp account.h transaction.h action.h
	clang++ -c -std=c++20 -Wall -Wextra -Wpedantic -Werror account.cpp -o account.o
transaction.o: transaction.cpp transaction.h action.h
	clang++ -c -std=c++20 -Wall -Wextra -Wpedantic -Werror transaction.cpp -o transaction.o
main.o: main.cpp account.h
	clang++ -c -std=c++20 -Wall -Wextra -Wpedantic -Werror main.cpp -o main.o