#include <iostream>
#include "src/Terminal.h"
#include "src/TCP.h"
using namespace std;

int main()
{
    DisableTerminal();
    TCPConnect();
    cout << "\n=> Enter Keyboard Commands to Control the Robot:" << endl;    

    while (1)
    {
        switch((int)getchar())
        {
            case 'w':
            cout << "Forward" << endl;
	    	ServerSend("w\n");
            break;

            case 's':
            cout << "Backward" << endl;
	    	ServerSend("s\n");
            break;

            case 'a':
            cout << "Left" << endl;
	    	ServerSend("a\n");
            break;
            
            case 'd':
            cout << "Right" << endl;
	    	ServerSend("d\n");
            break;
	    
	    	case 'b':
            cout << "Brake" << endl;
	    	ServerSend("b\n");
            break;  

	    	case 'p':
            cout << "Pickup" << endl;
	    	ServerSend("p\n");
            break;  

            default:
            break;
	}
    }
    return 0;
}
