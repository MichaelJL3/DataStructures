
COMPILER=g++
STD=-std=c++11
WARN=-Wall
DEBUG=-g
#LIBS

FLAGS=$(WARN) $(STD)

PRGRM=test
EXT=cpp
NAME=$(PRGRM)

ifdef O
OUTPUT=> $(NAME)_runlog.txt
endif

comp c:
	$(COMPILER) $(FLAGS) -o $(NAME) $(PRGRM).$(EXT) $(LIBS)

run r:
	./$(NAME) $(OUTPUT)