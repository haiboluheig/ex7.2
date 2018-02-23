#ifndef MACLASSE_H
#define MACLASSE_H

class Point {
public:
    //constructeur
    Point(float x = 0.f, float y = 0.f);
    //modificateur
    void deplacer(float dx, float dy);
    //sélecteur
    float abcisse() const;
    float ordonnee() const;
private:
    float x;
    float y;
};

#endif /* MACLASSE_H */

