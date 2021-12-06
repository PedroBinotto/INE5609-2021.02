/**
 * @file main.cpp
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
#include "doublyLinkedList.hpp"
#include "node.hpp"

int main(void) {

    dll::DoublyLinkedList list = dll::DoublyLinkedList();

    dll::Node nodo1 = dll::NodeFactory::newNode();
    dll::Node nodo2 = dll::NodeFactory::newNode();
    dll::Node nodo3 = dll::NodeFactory::newNode();
    dll::Node nodo4 = dll::NodeFactory::newNode(); 
    dll::Node nodo5 = dll::NodeFactory::newNode();
    dll::Node nodo6 = dll::NodeFactory::newNode();


    list.insertFirst(nodo1);
    list.insertLast(nodo2);
    list.getCurrentNode();
    list.insertAfterCurrent(nodo3);
    list.insertBeforeCurrent(nodo4);
    list.insertAtIndex(3, nodo5);
    list.isEmpty();
    list.removeFirst();
    list.removeLast();
    list.isFull()










    return 0;
}

