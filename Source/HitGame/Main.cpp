#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <windowsx.h>
#include <winuser.h>
#include <iostream>
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

#include "GameState.h"


int APIENTRY wWinMain( _In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR    lpCmdLine,
	_In_ int       nCmdShow )
{
	GameState state;
	sf::RenderWindow window( sf::VideoMode( 200, 200 ), "SFML works!" );	
	sf::Clock clock;

	while( window.isOpen() )
	{
		sf::Event event;
		while( window.pollEvent( event ) )
		{
			if( event.type == sf::Event::Closed )
				window.close();
		}

		sf::Time elapsed = clock.restart();
		state.Tick(elapsed.asSeconds());

		window.clear();
		state.Draw(window);
		window.display();
	}

	return 0;
}