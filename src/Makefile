MAJOR = 0
MINOR = 0

OBJECTS = caesar.o

all: libkcryptx.so.$(MAJOR).$(MINOR)

libkcryptx.so.$(MAJOR).$(MINOR): $(OBJECTS)
	$(CC) -shared -o $@ $(OBJECTS)

caesar.o: caesar.c kcryptx.h
	$(CC) -Wall -std=c17 -o $@ -c $<

