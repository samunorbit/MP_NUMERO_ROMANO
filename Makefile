CC = g++
OBJ_NAME = romano

CFLAGS = -Wall -std=c++11

DEPS = romano.hpp

OBJ = main.cpp 

all : $(OBJ)
	$(CC) $(OBJ) -o $(OBJ_NAME) $(CFLAGS)

.PHONY: clean

clean : rm  $(OBJ_NAME).exe
