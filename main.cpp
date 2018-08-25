#include "./crow_all.h"
using namespace std;

int main(int argc, char const *argv[])
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")
    ([](){
        return "<div><h1>Hello, Crow.</h1></div>";
    });

    app.port(18080).run();
}
