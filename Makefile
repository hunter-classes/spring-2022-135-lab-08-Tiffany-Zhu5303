main: main.o imageio.o funcs.o
	g++ -o main main.o imageio.o funcs.o

sample: sample.o imageio.o
	g++ -o sample sample.o imageio.o

main.o: main.cpp imageio.h funcs.h

funcs.o: funcs.cpp funcs.h imageio.h

sample.o: sample.cpp imageio.h

imageio.o: imageio.cpp imageio.h

clean:
	rm -f sample.o imageio.o funcs.o main.o TaskA.pgm TaskB.pgm TaskC.pgm TaskD.pgm main
