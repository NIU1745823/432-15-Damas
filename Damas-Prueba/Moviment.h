#ifndef MOVIMENT_H
#define MOVIMENT_H

#define MAX_MOVIMENT 12   // Màxim de posicions per on es pot moure en un torn, tambe equival al maxim que es podra matar

class Moviment
{
public:
    Moviment() : m_nMorts(0), m_nMoviments(0) 
    {
        for (int i = 0; i < MAX_MOVIMENT; i++) 
        {
            m_moviments[i] = -1; // valor per indicar buit
            m_morts[i] = -1; 
        }
    }
    // Afegir una posició al moviment
    void afegirMoviment(int posicio) 
    {
        if (m_nMoviments < MAX_MOVIMENT) 
        {
            m_moviments[m_nMoviments] = posicio;
            m_nMoviments++;
        }
    }
    // Afegir una posició de fitxa eliminada
    void afegirMort(int posicio) 
    {
        if (m_nMorts < MAX_MOVIMENT)
        {
            m_morts[m_nMorts] = posicio;
            m_nMorts++;
        }
    }
    int getnMorts() const { return m_nMorts; }
    bool haMatat() const { return m_nMorts > 0; }
    int getMoviment(int i) const 
    {
        if (i >= 0 && i < m_nMoviments) 
        {
            return m_moviments[i];
        }
        return -1;
    }
    int getMort(int i) const 
    {
        if (i >= 0 && i < m_nMorts) 
        {
            return m_morts[i];
        }
        return -1;
    }
    int getnMoviments() const { return m_nMoviments; }

private:
    int m_moviments[MAX_MOVIMENT]; // Posicions del moviment (es poden codificar com números)
    int m_morts[MAX_MORTS];        // Posicions on s’han eliminat fitxes
    int m_nMoviments;              // Quantes posicions de moviment hi ha
    int m_nMorts;                  // Quantes eliminacions s’han fet
};

#endif
