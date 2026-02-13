#include <iostream>
#include <set>
using namespace std;

int main(){
    int x1=0, x2=0, y1=0, y2=0, x3=0, x4=0, y3=0, y4=0,dis;
    cin >>x1 >>y1 >>x2 >>y2 ;

    set <int> v;
    v.insert(x1);
    v.insert(x2);
    v.insert(y1);
    v.insert(y2);   
    int f=0,cp1=0, cp2=0, ss=v.size();

    cp1 = x1-x2;
    cp2 = y1-y2;

    if( (cp1==cp2) ||(cp1 == (-cp2)) || (x1-x2 == 0) || (y1-y2 == 0) ){
        f=0;
    }
    else{
        f=1;
    }
    
    if( f==1 ) {
        cout<<(-1);
    }
    else{
        
    if(x1>x2){
        if(y1>y2) dis = (x1-x2) + (y1-y2);
        else dis = (x1-x2) + (y2-y1);
    }
    else{
        if(y1>y2) dis = (x2-x1) + (y1-y2);
        else dis = (x2-x1) + (y2-y1);
    }
    
    if((x1==x2) && (y1!=y2) ){
        x3 = x1+dis;
        x4 = x3;
        y3 = y1;
        y4 = y2;
    }
    else if ( (y1==y2) && (x1!=x2) ) {
        y3 = y1+dis;
        y4 = y3;  
        x3 = x1;
        x4 = x2;
    }

    else if( (x1!=x2) && (y1!=y2) ){
        x3 = x1;
        x4 = x2;
        y3 = y2;
        y4 = y1;
    }

    
    cout<< x3<<" "<< y3<<" "<< x4<<" "<< y4;

    }
    

}

