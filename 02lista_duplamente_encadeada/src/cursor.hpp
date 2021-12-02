/**
 * @file cursor.hpp
 *
 * @brief Parte do projeto para a disciplina de Estruturas de Dados cod. INE5609
 *
 * @author Pedro Santi Binotto
 * Contact: pedro.binotto@grad.ufsc.br
 *
 * @author Joao Pedro Ziliotto Martinez
 * Contact: joao.ziliotto@grad.ufsc.br
 */

#ifndef CURSOR_H
#define CURSOR_H

#include "node.hpp"

namespace dll {
    /**
     * Classe representativa do cursor de uma lista encadeada
     */
    class Cursor {
    private:
        Node **head;
        Node *current;

        bool regress(void);
        bool proceed(void);
    public:
        /**
         * Construtor da classe (default constructor)
         *
         * @param listHead HEAD da lista a qual o objeto cursor pertence
         */
        Cursor(Node **&listHead);

        /**
         * Move o cursor "n" posicoes em direcao a TAIL da lista
         *
         * @param n Numero de posicoes a avancar
         * @note Cursor sera posicionado em TAIL caso o numero de
         *     posicoes avancadas exceda o comprimento da lista
         *     ou caso o metodo seja executado em uma lista que
         *     encontra-se vazia
         */
        void proceedNPositions(int n);

        /**
         * Move o cursor "n" posicoes em direcao a HEAD da lista
         *
         * @param n Numero de posicoes a regredir
         * @note Cursor sera posicionado em HEAD caso o numero de
         *     posicoes regredidas exceda o comprimento da lista
         *     ou caso o metodo seja executado em uma lista que
         *     encontra-se vazia
         */
        void regressNPositions(int n);

        /**
         * Move o cursor para a posicao HEAD
         */
        void goToHead(void);

        /**
         * Move o cursor para a posicao TAIL
         */
        void goToTail(void);

        /**
         * Retorna o elemento atual para qual o cursor aponta.
         *
         * @returns Ponteiro para elemento atual ou NULL em caso
         *     de uma lista que encontra-se vazia
         */
        Node *getCurrentNode(void);

        /**
         * Metodo privado.
         *
         * Atribui um ponteiro NULL para o atributo
         *     interno do elemento atual 'current'
         */
        void setCurrentToNull(void);
    };
}

#endif

