#include "server.h"

class ME : public Server
{
    public:
        ME(int port):Server(port){};
        void onMessage(int socket)
        {
            std::cout << "From Derived" << std::endl;
        }
};

int main()
{
    ME server(8080);
    server.init();
    server.run();

}