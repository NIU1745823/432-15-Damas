#ifndef POSICIO_H
#define POSICIO_H

#include <string>
using namespace std;

class Posicio
{
public:
    Posicio() : m_fila(0), m_columna(0) {}
    Posicio(int fila, int columna) : m_fila(fila), m_columna(columna) {}
    //Converteix una posicio en una posicio de un array 8x8 (0..7) per exemple c1 = (c-a)(1-1) = 2-0
    Posicio(const string& posicio) {
        m_columna = posicio[0] - 'a';
        m_fila = posicio[1] - '1';
    }
    int getColumna() const { return m_columna; }
    int getFila() const { return m_fila; }
    void setColumna(int columna) { m_columna = columna; }
    void setFila(int fila) { m_fila = fila; }
    bool operator==(const Posicio& posicio) const {
        return m_fila == posicio.m_fila && m_columna == posicio.m_columna;
    }

private:
    int m_fila;
    int m_columna;
};

#endif
