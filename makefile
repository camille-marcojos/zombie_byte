output: main.o menu.o zombieOutbreak.o space.o office.o character.o scientist.o cdc.o hallway.o cafeteria.o treatmentroom.o laboratory.o
	g++ main.o menu.o zombieOutbreak.o space.o office.o character.o scientist.o cdc.o hallway.o cafeteria.o treatmentroom.o laboratory.o -o output

laboratory.o: laboratory.cpp laboratory.hpp
	g++ -std=c++11 -g -Wall -c laboratory.cpp

treatmentroom.o: treatmentroom.cpp treatmentroom.hpp
	g++ -std=c++11 -g -Wall -c treatmentroom.cpp

cafeteria.o: cafeteria.cpp cafeteria.hpp
	g++ -std=c++11 -g -Wall -c cafeteria.cpp

hallway.o: hallway.cpp hallway.hpp
	g++ -std=c++11 -g -Wall -c hallway.cpp

scientist.o: scientist.cpp scientist.hpp
	g++ -std=c++11 -g -Wall -c scientist.cpp

character.o: character.cpp character.hpp
	g++ -std=c++11 -g -Wall -c character.cpp

office.o: office.cpp menu.hpp
	g++ -std=c++11 -g -Wall -c office.cpp

space.o: space.cpp space.hpp
	g++ -std=c++11 -g -Wall -c space.cpp

zombieOutbreak.o: zombieOutbreak.cpp zombieOutbreak.hpp
	g++ -std=c++11 -g -Wall -c zombieOutbreak.cpp

cdc.o: cdc.cpp cdc.hpp
	g++ -std=c++11 -g -Wall -c cdc.cpp

menu.o: menu.cpp menu.hpp
	g++ -std=c++11 -g -Wall -c menu.cpp

main.o: main.cpp
	g++ -std=c++11 -g -Wall -c main.cpp

clean:
	rm *.o output