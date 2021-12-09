#ifndef SENSOR_H
#define SENSOR_H
#define SENSOR_H

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

class Sensor{

private:
    double *_dato;
    int _tamano;

public:
    Sensor(int tamano = 1){
        _dato = new double[tamano];
        _tamano = tamano;
    }
    ~Sensor(){ delete []_dato; }
    double leerDato(int i = 0){ if(i<_tamano) return _dato[i]; else return 0 ; }
    void actualizar(){
        for(int i=0; i < _tamano; i++)
            //_dato[i] = ( (rand() %46)-10) ;// 10.;
            _dato[i] = (rand()%56) -25 ;
    }
    std::string mostrarDatos(){
        std::stringstream a;
        for(int i =0; i< _tamano; i++)
            a << _dato[i] << "; ";

        a << std::endl;
        return a.str();
    }
};

class int_luz:public Sensor{
public:
    int_luz():Sensor(1){

    }
    double intensidad() {

        return leerDato(0);}
};


class Temp_Hum: public Sensor{
public:
    Temp_Hum():Sensor(2){}
    double temperatura() {return leerDato(0);}
    double humedad() { return leerDato(1);}
};

class Viento: public Sensor{
public:
    Viento():Sensor(2){}
    double velocidad() {return leerDato(0);}
    double direccion() {return leerDato(1);}
};

#endif // SENSOR_H
