/**
 * @file node.cpp
 *
 * @brief Parte do projeto para a disciplina de Estruturas de Dados cod. INE5609
 *
 * @author Pedro Santi Binotto
 * Contact: pedro.binotto@grad.ufsc.br
 *
 * @author Joao Pedro Ziliotto Martinez
 * Contact: joao.ziliotto@grad.ufsc.br
 */

#include "node.hpp"

using namespace dll;

Node::Node(Node *nextNode, Node *prevNode, int val) { 

}

int Node::getValue(void) { return value;}
long Node::getKey(void) { return key;}
Node *Node::getPrevNode(void) { return prev;}
Node *Node::getNextNode(void) { return next;}

void Node::setValue(int val) { value = val;}
void Node::setPrevNode(Node *prevNode) { prev = prevNode;}
void Node::setNextNode(Node *nextNode) { next = nextNode;}

