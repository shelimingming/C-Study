test: main.o map.o
    g++ main.o map.o -o test
main.o: main.cpp
    g++ -c main.cpp -o main.o
map.o: map.cpp
    g++ -c map.cpp -o map.o
clean:
    rm *.o *.exe