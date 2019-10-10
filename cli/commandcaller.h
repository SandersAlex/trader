#ifndef COMMANDCALLER_H
#define COMMANDCALLER_H

#include <QByteArray>
#include <QLocalSocket>

class CommandCaller : public QLocalSocket
{
    Q_OBJECT

public:
    explicit CommandCaller( QString exchange, QByteArray command, QObject *parent = nullptr );
};

#endif // COMMANDCALLER_H
