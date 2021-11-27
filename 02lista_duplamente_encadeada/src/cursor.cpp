/**
 * @file cursor.cpp
 *
 * @brief Parte do projeto para a disciplina de Estruturas de Dados cod. INE5609
 *
 * @author Pedro Santi Binotto
 * Contact: pedro.binotto@grad.ufsc.br
 *
 * @author Joao Pedro Ziliotto Martinez
 * Contact: joao.ziliotto@grad.ufsc.br
 */

#include <iostream>
#include "cursor.hpp"


using namespace dll;

// TODO: impl

Cursor::Cursor(Node *listHead) { }

bool Cursor::regress(void) { 
	if (current->getPrevNode() != NULL)
	{	
		current = current->getPrevNode();
		return true;
	}
	return false;
}
bool Cursor::proceed(void) { 
	if (current->getNextNode() != NULL)
	{
		current = current->getNextNode();
		return true;
	}
	return false;
}

void Cursor::proceedNPositions(int n) { 
	for (int i = 0; i < n; i++)
	{
		if (!proceed())
		{
			std::cout << "ow seu banzo!" << std::endl;
			break;
		}
	}
} 
void Cursor::regressNPositions(int n) { 

}

void Cursor::goToHead(void) { 

}
void Cursor::goToTail(void) { 

}

Node *Cursor::getCurrentNode(void) { 
	return current;
}

