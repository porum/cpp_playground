//
// Created by guobao.sun on 2023/8/26.
//

#include <iostream>

class WebSocket {
public:
    WebSocket();

    void connect(std::string url, int port);

    void close(int code, std::string reason);

    ~WebSocket();
};

WebSocket::WebSocket() {

}

void WebSocket::connect(std::string url, int port) {

}

void WebSocket::close(int code, std::string reason) {

}

WebSocket::~WebSocket() {

}

int main() {
    WebSocket webSocket = WebSocket();
    webSocket.connect("127.0.0.1", 9001);
    webSocket.close(1000, "bye");
    return 0;
}