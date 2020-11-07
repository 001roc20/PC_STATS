main: main.o pcstats.o
	g++ -o main main.o pcstats.o
	rm *.o

pcstats.o: pcstats.cc
	g++ -c pcstats.cc

main.o: main.cc
	g++ -c main.cc

clean:
	rm main