#include "Server.hpp"
#include "mainHandler.hpp"

int main(int argc, char const *argv[])
{
    Server server(7000, mainHandler);
    while (true) server.handleNextConnection();
}
