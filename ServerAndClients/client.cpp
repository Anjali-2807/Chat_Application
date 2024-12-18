#include <iostream>
#include <string>
#include <cstring>
#include <unistd.h>
#include <arpa/inet.h>
#include <thread>

#define PORT 3000

using namespace std;  


void receive_messages(int socket) {
    char buffer[1024];
    while (true) {
        memset(buffer, 0, sizeof(buffer));
        int bytes_received = recv(socket, buffer, sizeof(buffer), 0);
        if (bytes_received <= 0) {
            break; 
        }
        cout << buffer << endl; 
    }
}

int main() {
    int client_socket;
    sockaddr_in server_addr;
    string username;

    client_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (client_socket < 0) {
        cerr << "Socket creation failed!" << endl;
        return -1;
    }

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);
    inet_pton(AF_INET, "127.0.0.1", &server_addr.sin_addr);

    if (connect(client_socket, (sockaddr*)&server_addr, sizeof(server_addr)) < 0) {
        cerr << "Connection failed!" << endl;
        return -1;
    }


    cout << "Enter your username: ";
    getline(cin, username);


    send(client_socket, username.c_str(), username.size(), 0);


    thread(receive_messages, client_socket).detach();

    string message;
    while (true) {
        getline(cin, message);
        
        if (message == "exit") {
            break;
        }

        send(client_socket, message.c_str(), message.size(), 0);
    }

    close(client_socket);
    return 0;
}
