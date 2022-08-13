/**
 * C++ class for a game of the Tower of Hanoi puzzle.
 *
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "Game.h"
#include "Stack.h"
#include "uiuc/Cube.h"
#include "uiuc/HSLAPixel.h"

#include <iostream>
using std::cout;
using std::endl;

// Solves the Tower of Hanoi puzzle.
// (Feel free to call "helper functions" to help you solve the puzzle.)
void Game::solve()
{
	// Prints out the state of the game:
	cout << *this << endl;

	// @TODO -- Finish solving the game!
	solveRecursive(stacks_[0].size(), 0, 1, 2);
	// solveInterative((int)stacks_[0].size());
}

void Game::solveRecursive(int n, int fr, int spare, int to)
{
	if (n == 1)
	{
		stacks_[to].push_back(stacks_[fr].removeTop());
		cout << *this << endl;
	}

	else
	{
		solveRecursive(n - 1, fr, to, spare);
		solveRecursive(1, fr, spare, to);
		solveRecursive(n - 1, spare, fr, to);
	}
}

void Game::legalMove(int i, int j)
{
	if (stacks_[i].size() == 0)
	{
		move(j, i);
	}
	else if (stacks_[j].size() == 0)
	{
		move(i, j);
	}
	else if (stacks_[i].peekTop().getLength() > stacks_[j].peekTop().getLength())
	{
		move(j, i);
	}
	else
	{
		move(i, j);
	}
	cout << *this << endl;
}

void Game::move(int i, int j)
{
	stacks_[j].push_back(stacks_[i].removeTop());
}

void Game::solveInterative(int n)
{
	while ((int)stacks_[2].size() != n)
	{
		legalMove(0, 1);
		legalMove(0, 2);
		legalMove(1, 2);
	}
}

// Default constructor to create the initial state:
Game::Game()
{
	// Create the three empty stacks:
	for (int i = 0; i < 3; i++)
	{
		Stack stackOfCubes;
		stacks_.push_back(stackOfCubes);
	}

	// Create the four cubes, placing each on the [0]th stack:
	Cube blue(4, uiuc::HSLAPixel::BLUE);
	stacks_[0].push_back(blue);

	Cube orange(3, uiuc::HSLAPixel::ORANGE);
	stacks_[0].push_back(orange);

	Cube purple(2, uiuc::HSLAPixel::PURPLE);
	stacks_[0].push_back(purple);

	Cube yellow(1, uiuc::HSLAPixel::YELLOW);
	stacks_[0].push_back(yellow);
}

std::ostream &operator<<(std::ostream &os, const Game &game)
{
	for (unsigned i = 0; i < game.stacks_.size(); i++)
	{
		os << "Stack[" << i << "]: " << game.stacks_[i];
	}
	return os;
}
