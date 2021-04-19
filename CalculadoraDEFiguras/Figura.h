#ifndef FIGURA_H
#define FIGURA_H


class Figura
{
private:
    float area;
    float perimetro;

    public:
        Figura();
        virtual ~Figura();

    protected:
    float areas(float);
    float perimetros (float);

    private:
    void menu();

};

#endif // FIGURA_H
