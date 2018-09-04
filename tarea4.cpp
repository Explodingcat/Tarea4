#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>


using namespace std;

void llenar_Matriz(int tablero[][9], char *datos)
{
    int hola, numeros[3],cont=-1;;
    string cadena=datos;
    char s;

     for(int i=0;i<9;i++)
     {
         for(int j=0;j<9;j++)
         {
             tablero[i][j]=0;
          }
      }
    
     for(int i=0;i<cadena.length();i++)
     {
         s=cadena[i];
         hola=s;
         if(hola>47 && hola<58)
         {
             numeros[++cont]=hola-48;
         }
         if(cont==2)
         {
             tablero[numeros[0]][numeros[1]]=numeros[2];
             cont=-1;
         }
     
     }
}

int comprobar_Datos(char *datos)
{
    int dato=1,hola,chao=0,numeros[3],cont=-1;
    char s;
    string cadena=datos;
    for(int i=0;i<cadena.length();i++)
     {
         s=cadena[i];
         hola=s;
         if(hola>47 && hola<58 || hola==91 || hola==93 || hola==59)
         {
            if((chao>47 && chao<58) && (hola>47 && hola<58))
            {
                i=cadena.length();
                dato=0;
            }
            chao=hola;
         }
         else
         {
            i=cadena.length();
            dato=0;
         }
     
     }

     if(dato==1)
     {
        for(int i=0;i<cadena.length();i++)
        {
             s=cadena[i];
             hola=s;
             if(hola>47 && hola<58)
             {
                 numeros[++cont]=hola-48;
             }
             if(cont==2)
             {
                 cont=-1;
                 if(numeros[0]>-1 && numeros[0]<9 && numeros[1]>-1 && numeros[1]<9 && numeros[2]>0 && numeros[2]<10)
                 {

                 }
                 else
                 {
                    i=cadena.length();
                    dato=0;
                 }
             }
     
        }
     }
     return dato;
}

void mostrar_Matriz(int tablero[][9])
{
    for(int i=0;i<9;i++)
    {
        if(i%3==0)
        {
            cout<<"--------------------"<<endl;
        }
        for(int j=0;j<9;j++)
        {
            if(j%3==0)
            {
                cout<<"|";
            }
            cout<<tablero[i][j]<<" ";

        }
        cout<<endl;
    }
}

int RevisarFila(int fila, int valor, int tablero[][9])
{
    int ver=0;
    if((valor>0 && valor<10) && (fila>=0 && fila<=8))
    {
    	ver=1;
	    for(int i=0;i<9;i++)
	    {
	        if(tablero[fila][i]==valor)
	        {
	            ver=0;
	            i=9;
	        }
	    }
	}
    return ver;
}

int RevisarColumna(int columna, int valor, int tablero[][9])
{
    int ver=0;
    if((valor>0 && valor<10) && (columna>=0 && columna<=8))
    {
    	ver=1;
	    for(int i=0;i<9;i++)
	    {
	        if(tablero[i][columna]==valor)
	        {
	            ver=0;
	            i=9;
	        }
	    }
	}
    return ver;
}

int RevisarSubmatriz(int subMatriz, int valor, int tablero[][9])
{
    int ver=0;
    if(valor>0 && valor<10)
    {
    	ver=1;
	    if(subMatriz==1)
	    {
	        for(int i=0;i<3;i++)
	        {
	            for(int j=0;j<3;j++)
	            {
	                if(tablero[i][j]==valor)
	                {
	                    ver=0;
	                    i=9;
	                    j=9;
	                }
	            }
	        }
	    }
	    else
	    {
	        if(subMatriz==2)
	        {
	            for(int i=0;i<3;i++)
	            {
	                for(int j=3;j<6;j++)
	                {
	                    if(tablero[i][j]==valor)
	                    {
	                        ver=0;
	                        i=9;
	                        j=9;
	                    }
	                }
	            }
	        }
	        else
	        {
	            if(subMatriz==3)
	            {
	                for(int i=0;i<3;i++)
	               {
	                    for(int j=6;j<9;j++)
	                    {
	                        if(tablero[i][j]==valor)
	                        {
	                            ver=0;
	                            i=9;
	                            j=9;
	                        }
	                    }
	                }
	            }
	            else
	            {
	                if(subMatriz==4)
	                {
	                    for(int i=3;i<6;i++)
	                    {
	                        for(int j=0;j<3;j++)
	                        {
	                            if(tablero[i][j]==valor)
	                            {
	                                ver=0;
	                                i=9;
	                                j=9;
	                            }
	                        }
	                    }
	                }
	                else
	                {
	                    if(subMatriz==5)
	                    {
	                        for(int i=3;i<6;i++)
	                        {
	                            for(int j=3;j<6;j++)
	                            {
	                                if(tablero[i][j]==valor)
	                                {
	                                    ver=0;
	                                    i=9;
	                                    j=9;
	                                }
	                            }
	                        }
	                    }
	                    else
	                    {
	                        if(subMatriz==6)
	                        {
	                            for(int i=3;i<6;i++)
	                            {
	                                for(int j=6;j<9;j++)
	                                {
	                                    if(tablero[i][j]==valor)
	                                    {
	                                        ver=0;
	                                        i=9;
	                                        j=9;
	                                    }
	                                }
	                            }
	                        }
	                        else
	                        {
	                            if(subMatriz==7)
	                            {
	                                for(int i=6;i<9;i++)
	                                {
	                                    for(int j=0;j<3;j++)
	                                    {
	                                        if(tablero[i][j]==valor)
	                                        {
	                                            ver=0;
	                                            i=9;
	                                            j=9;
	                                        }
	                                    }
	                                }
	                            }
	                            else
	                            {
	                                if(subMatriz==8)
	                                {
	                                    for(int i=6;i<9;i++)
	                                    {
	                                        for(int j=3;j<6;j++)
	                                        {
	                                            if(tablero[i][j]==valor)
	                                            {
	                                                ver=0;
	                                                i=9;
	                                                j=9;
	                                            }
	                                        }
	                                    }
	                                }
	                                else
	                                {
	                                    if(subMatriz==9)
	                                    {
	                                        for(int i=6;i<9;i++)
	                                        {
	                                            for(int j=6;j<9;j++)
	                                            {
	                                                if(tablero[i][j]==valor)
	                                                {
	                                                    ver=0;
	                                                    i=9;
	                                                    j=9;
	                                                }
	                                            }
	                                        }
	                                    }
	                                }
	                            }
	                        }
	                    }
	                }
	            }
	        }
	    }
	}
    return ver;
}

int main(int argc, char* argv[])
{

    int  tablero[9][9];
    if(argc<2)
    {
        cout<<"Ingresa los datos"<<endl;
    }
    else
    {
        if(comprobar_Datos(argv[1])==1)
        {
            llenar_Matriz(tablero,argv[1]);
            mostrar_Matriz(tablero);
            //REVISADORES 1= Puede ingresar el valor 0= No puede ingresar el valor en los parametros ingresados
            //cout<<RevisarColumna(0,0,tablero)<<endl;
            //cout<<RevisarFila(1,9,tablero)<<endl;
            //cout<<RevisarSubmatriz(2,1,tablero)<<endl;
            //cout<<RevisarSubmatriz(2,2,tablero)<<endl;
        }
        else
        {
            cout<<"Datos ingresados erroneos"<<endl;
        }
    }
    return 0;
}