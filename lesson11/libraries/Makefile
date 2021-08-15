
SRCS += list_of_files.c
LIBNAME += liblist_of_files.so

all:
	gcc $(SRCS) -o $(LIBNAME) -shared -fPIC
	
install:
	cp $(LIBNAME) /usr/lib
	cp list_of_files.h /usr/include

uninstall:
	rm -f /usr/lib/$(LIBNAME) /usr/include/list_of_files.h

clean:
	rm -f $(LIBNAME) *.o
