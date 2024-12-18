
# Chat Application on terminal

This is a simple chat application built in C++ using Sockets that allows multiple clients to communicate with each other. It supports direct messages (DM) between users, writes all messages into a file for historical reference, and can handle multiple users concurrently. For now, group chats are not allowed.


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
After compiling server and client cpp files, two files namely server and cpp would be created. They are being created in the uploaded ServerAndClients folders as I was testing the application in Visual Studio Code.

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

🔹 Group messages are not allowed for now. When a user joins the terminal, their arrival will be visible to all participants by a message, "username has joined the chat!"
   
   If a user tries to send a message visible to everyone, the user gets the message "Invalid message. Please send only direct messages starting with @username."

🔹 Direct Messages (DM): To send a direct message (DM) to a specific user, use the following format:
```bash
  @username message_to_be_sent
```
🔹 To add more clients, simply open additional terminals and repeat the steps to run the client. Each client can join the chat with a different username.

🔹 When a user exits the terminal by typing exit or pressing Ctrl+C on the terminal, a message appears on the terminal saying "username has left the chat."




# Configuration

🔹 Port: The server listens on port 3000. You can change the port by modifying the PORT constant in both server.cpp and client.cpp.

🔹 Maximum Clients: The MAX_CLIENTS constant defines the maximum number of clients the server can handle at any given time. You can modify this value based on your requirements.
