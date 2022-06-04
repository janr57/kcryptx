MAJOR = 0
MINOR = 0

OBJECTS = caesar.o

all: libkcryptx.so.$(MAJOR).$(MINOR) test

libkcryptx.so.$(MAJOR).$(MINOR): $(OBJECTS)
	$(CC) -shared -o $@ $(OBJECTS)

caesar.o: caesar.c kcryptx.h
	$(CC) -Wall -std=c17 -o $@ -c $<

test: test.c
	$(CC) -Wall -std=c17 -o $@ $< -L. -lkcryptx

.PHONY: clean

clean:
	rm -f *.o libkcryptx.so.* test

