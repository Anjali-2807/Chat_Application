Libraries used :
<iostream>
<vector>
<string>
<thread>
<fstream>
<cstring>
<netinet/in.h>
<unistd.h>
<algorithm>
<map>

Commands for running on VS Code terminal :

cd ServerAndClients     // Goining to the respective directory/folder
g++ server.cpp -o server -pthread -std=c++11    // Compiling the server.cpp code
g++ client.cpp -o client -pthread -std=c++11    // Compiling the client.cpp code


Open another terminal :

cd ServerAndClients
./server    // To run the server

In another terminal :

cd ServerAndClients
./client    // To run the client
Then enter the username.
Create some more clients by following the above command

After this, direct messages can be sent using the format : @username message_to_be_sent

Type exit to or Ctrl+C on the terminal leave the chat.
