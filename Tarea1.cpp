#include <iostream>

using namespace std;
int A(int ano){
    for(int i=1700;i<=1799;i++)
        if(ano==i)
            return 5;
    for(int i=1800;i<=1899;i++)
        if(ano==i)
            return 3;
    for(int i=1900;i<=1999;i++)
        if(ano==i)
            return 1;
    for(int i=2000;i<=2099;i++)
        if(ano==i)
            return 0;
    for(int i=2100;i<=2199;i++)
        if(ano==i)
            return -2;
    for(int i=2200;i<=2299;i++)
        if(ano==i)
            return -4;
}

int B(int ano){
    int b=ano%1000%100;
    int res=b+b/4;
    return res;
}

int C(int mes,int ano){
    int c;
    if (!(ano%4) or !(ano%400))
            if(ano%100 or !(ano%4 or ano%400))
                if(mes==1||mes==2)
                    c=-1;
        c=0;
    return c;
}

int D(int mes){
        if (mes==1)
            return 6;
        if (mes==2)
            return 2;
        if (mes==3)
            return 2;
        if (mes==4)
            return 5;
        if (mes==5)
            return 0;
        if (mes==6)
            return 3;
        if (mes==7)
            return 5;
        if (mes==8)
            return 1;
        if (mes==9)
            return 4;
        if (mes==10)
            return 6;
        if (mes==11)
            return 2;
        if (mes==12)
            return 4;
}

int E(int dia=1){
    return dia;
}

void Calendario(int mes, int ano){
    int a=A(ano);
    int b=B(ano);
    int c=C(mes,ano);
    int d=D(mes);
    int e=E();
    int res=(a+b+c+d+e)%7;

    char semana[]={'L', 'M', 'X', 'J', 'V','S', 'D'};
    for(int i=0;i<7;i++){
        if(semana[i]=='D')
            cout<<semana[i]<<endl;
        else
        cout<<semana[i]<<"  ";
    }

    int lim;
    if (c==-1 && mes==2)
        lim=29;
    if (c==0 && mes==2)
        lim=28;
    if (mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12)
        lim=31;
    if (mes==4||mes==6||mes==9||mes==11)
        lim=30;

    int n;
    if(res==1){
        n=1;
    }
    if(res==2){
        cout<<"   ";
        n=2;
    }
    if(res==3){
        cout<<"      ";
        n=3;
    }
    if(res==4){
        cout<<"         ";
        n=4;
    }
    if(res==5){
        cout<<"            ";
        n=5;
    }
    if(res==6){
        cout<<"               ";
        n=6;
    }
    if(res==0){
        cout<<"                  ";
        n=7;
        for(int i=1;i<=9;i++){
            if(n==7){
                cout<<i<<endl;
                n=1;
            }
            else{
            cout<<i<<"  ";
            n++;
            }
        }
        n=2;
        for(int i=10;i<=lim;i++){
            if(n==7){
                cout<<i<<endl;
                n=1;
            }
            else{
            cout<<i<<" ";
            n++;
            }
        }
    }
    else{
        for(int i=1;i<=9;i++){
            if(n==7){
                cout<<i<<endl;
                n=1;
            }
            else{
            cout<<i<<"  ";
            n++;
            }
        }
        n=2+res;
        for(int i=10;i<=lim;i++){
            if(n==7){
                cout<<i<<endl;
                n=1;
            }
            else{
            cout<<i<<" ";
            n++;
            }
        }
    }
}
void Romanos(int n){
    for(int i=1;i<=1000;i=i*10){
        if(i==1){
            int a=(n/(1000/i));
            if(a==1)
                cout<<"M";
            if(a==2)
                cout<<"MM";
            if(a==3)
                cout<<"MMM";
            if(a==4)
                cout<<"MV";
            if(a==5)
                cout<<"V";
            if(a==6)
                cout<<"VM";
            if(a==7)
                cout<<"VMM";
            if(a==8)
                cout<<"VMMM";
            if(a==9)
                cout<<"MX";
        }
        if(i==10){
            int a=(n%1000/(1000/i));
            if(a==1)
                cout<<"C";
            if(a==2)
                cout<<"CC";
            if(a==3)
                cout<<"CCC";
            if(a==4)
                cout<<"CD";
            if(a==5)
                cout<<"D";
            if(a==6)
                cout<<"DC";
            if(a==7)
                cout<<"DCC";
            if(a==8)
                cout<<"DCCC";
            if(a==9)
                cout<<"CM";
        }
            if(i==100){
            int a=(n%1000%100/(1000/i));
            if(a==1)
                cout<<"X";
            if(a==2)
                cout<<"XX";
            if(a==3)
                cout<<"XXX";
            if(a==4)
                cout<<"XL";
            if(a==5)
                cout<<"L";
            if(a==6)
                cout<<"LX";
            if(a==7)
                cout<<"LXX";
            if(a==8)
                cout<<"LXXX";
            if(a==9)
                cout<<"XC";
        }
            if(i==1000){
            int a=(n%1000%100%10/(1000/i));
            if(a==1)
                cout<<"I";
            if(a==2)
                cout<<"II";
            if(a==3)
                cout<<"III";
            if(a==4)
                cout<<"IV";
            if(a==5)
                cout<<"V";
            if(a==6)
                cout<<"VI";
            if(a==7)
                cout<<"VII";
            if(a==8)
                cout<<"VIII";
            if(a==9)
                cout<<"IX";
        }
    }
}

void Vuelto(float b){
    int a=(b*100)+1;
    int b200;
    int b100;
    int b50;
    int b20;
    int b10;
    int m5;
    int m2;
    int m1;
    int m05;
    int m02;
    int m01;
    b200=a/20000;
    b100=(a%20000)/10000;
    b50=((a%20000)%10000)/5000;
    b20=(((a%20000)%10000)%5000)/2000;
    b10=((((a%20000)%10000)%5000)%20000)/1000;
    m5=(((((a%20000)%10000)%5000)%2000)%1000)/500;
    m2=((((((a%20000)%10000)%5000)%2000)%1000)%500)/200;
    m1=(((((((a%20000)%10000)%5000)%2000)%1000)%500)%200)/100;
    m05=((((((((a%20000)%10000)%5000)%2000)%1000)%500)%200)%100)/50;
    m02=(((((((((a%20000)%10000)%5000)%2000)%1000)%500)%200)%100)%50)/20;
    m01=((((((((((a%20000)%10000)%5000)%2000)%1000)%500)%200)%100)%50)%20)/10;
    cout<<"billetes de 200: "<<b200<<endl
    <<"billetes de 100: "<<b100<<endl
    <<"billetes de 50: "<<b50<<endl
    <<"billetes de 20: "<<b20<<endl
    <<"billetes de 10: "<<b10<<endl
    <<"monedas de 5: "<<m5<<endl
    <<"monedas de 2: "<<m2<<endl
    <<"monedas de 1: "<<m1<<endl
    <<"monedas de 0.5: "<<m05<<endl
    <<"monedas de 0.2: "<<m02<<endl
    <<"monedas de 0.1: "<<m01<<endl;
}

int main()
{
    //Vuelto(1051.30);
    //Romanos(4297);
    Calendario(9,2017);
    return 0;
}
