
# Chat Application on terminal

This is a simple chat application built in C++ using socket.io that allows multiple clients to communicate with each other. It supports direct messages (DM) between users, writes all messages into a file for historical reference, and can handle multiple users concurrently.


# Features

🔹 Multiple Clients: Supports up to MAX_CLIENTS concurrent clients.

🔹 Direct Messaging: Users can send private messages using the @username format.

🔹 Chat History: All messages are stored into a file named chat_history.

🔹 Real-time Communication: Clients receive messages instantly after they are sent by others.
# File Structure

```bash
  ServerAndClients/
  ├── server.cpp          
  ├── client.cpp           
  ├── chat_history         
  └── README.md            
```
# Run Locally
In the terminal :

Go to the ServerAndClients directory 

```bash
  cd ServerAndClients
```

Compile the server.cpp file

```bash
  g++ server.cpp -o server -pthread -std=c++11
```

Compile the client.cpp file

```bash
  g++ client.cpp -o client -pthread -std=c++11
```

Open another terminal and in that :

Run the server

```bash
  cd ServerAndClients
  ./server
```

Run the client

```bash
  cd ServerAndClients
  ./client
```

🔹 Send Messages: After entering your username, you can start typing messages. Messages sent will be broadcast to all connected clients.

🔹 Direct Messages (DM): To send a direct message (DM) to a specific user, use the following format:
```bash
  @username message_to_be_sent
```
🔹 To add more clients, simply open additional terminals and repeat the steps to run the client. Each client can join the chat with a different username.




# Configuration

🔹 Port: The server listens on port 3000. You can change the port by modifying the PORT constant in both server.cpp and client.cpp.

🔹 Maximum Clients: The MAX_CLIENTS constant defines the maximum number of clients the server can handle at any given time. You can modify this value based on your requirements.
