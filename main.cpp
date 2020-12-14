#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_main.h>

#include "RayCastingWindow.h"


int main(int, char **)
{
	SDL_Init(SDL_INIT_EVERYTHING);

	try{
		RayCastingWindow w;

		w.main_loop();//основной цикл
	} catch(const std::exception &e){
		std::cerr << "Ошибка! "
				<< std::endl << e.what() << std::endl;
		return 1;
	} catch (...){
		std::cerr << "Возникла неизвестная ошибка!" << std::endl;
	}
	return 0;
}






