#include <QApplication>
#include <QPushButton>
#include <QPushButton>
#include <QPushButton>
#include <QPushButton>
после поинтера
  
int main(int argc, char *argv[ ]) 
{
QApplication app(argc, argv);
 
QPushButton button("Hello, World!");
button.resize(200, 60);
button.show( );
 
return app.exec( );
}
