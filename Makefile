OUT_FOLDER=out
SRC_FOLDER=source

all: compile run

compile:
	mkdir -p $(OUT_FOLDER)
	g++ -Wall $(SRC_FOLDER)/*.cpp $(SRC_FOLDER)/**/*.cpp -o $(OUT_FOLDER)/game -lsfml-graphics -lsfml-window -lsfml-system

run:
	clear
	./$(OUT_FOLDER)/game