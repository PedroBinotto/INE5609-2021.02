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
    class Cursor {
    private:
        Node *current;

        bool regress(void);
        bool proceed(void);
    public:
        Cursor(Node *listHead);

        void proceedNPositions(int n);
        void regressNPositions(int n);
        void goToHead(void);
        void goToTail(void);

        Node *getCurrentNode(void);
    };
}

#endif

