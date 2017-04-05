clean:
	rm -rf a.out operaciones.o liboperaciones.a main
obj:
	gcc -c operaciones.c -o operaciones.o
lib:
	ar rcs liboperaciones.a operaciones.o
bin: obj lib
	gcc -static main2.c -L. -I. -loperaciones -o main
