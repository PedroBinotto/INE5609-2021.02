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
     * Documentation block for class
     */
    class Cursor {
    private:
        Node **head;
        Node *current;

        bool regress(void);
        bool proceed(void);
    public:
        /**
         * Documentation block for method
         */
        Cursor(Node *listHead=NULL);

        /**
         * Documentation block for method
         */
        void proceedNPositions(int n);

        /**
         * Documentation block for method
         */
        void regressNPositions(int n);

        /**
         * Documentation block for method
         */
        void goToHead(void);

        /**
         * Documentation block for method
         */
        void goToTail(void);

        /**
         * Documentation block for method
         */
        Node *getCurrentNode(void);

        void setCurrentToNull(void);
    };
}

#endif

