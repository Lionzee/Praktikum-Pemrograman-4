#ifndef calculator_h
#define calculator_h

#endif
using namespace std;

class iReceiver{
    
public:
    
    int id;
    virtual void setAction(int _action) = 0;
    virtual int getResult() = 0;
};

class Cmd{
    
public:
    iReceiver *receiver;    
    Cmd(iReceiver *_receiver):receiver(_receiver){
}
    
    virtual int execute()=0;   
};

class AddCommand : public Cmd {
public:
    AddCommand(iReceiver *_receiver):Cmd(_receiver){ 
}

    int execute(){    
        receiver->setAction(1);
        return receiver->getResult();
    }
};

class SubstractCommand : public Cmd {  

public:
    SubstractCommand(iReceiver *_receiver):Cmd(_receiver){
}    
    int execute(){
	    receiver->setAction(2);    
        return receiver->getResult();
    }    
};


class Calc: public iReceiver{
    int x;
    int y;
    int currentIdAction;
    
public:
    Calc(int _x, int _y):x(_x),y(_y){ 
}
    
    void setAction(int _action){        
        currentIdAction = _action;
    }
    
    int getResult(){
        int result;
        
        if(currentIdAction == 1){
            result = x + y;
        }else if(currentIdAction == 2){    
            result = x / y;
        }
        return result;
    }
};
