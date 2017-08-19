all: driver

driver: list.o driver.o
	g++ -o driver -g list.o -g driver.o

driver.o:
	g++ -Wall -pedantic -c -g driver.cpp

list.o:
	g++ -Wall -pedantic -c -g list.cpp

clean:
	rm -f core driver *.o