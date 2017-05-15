#pragma once

// Cible de la commande ConnectedSocket

class ConnectedSocket : public CAsyncSocket
{
public:
	ConnectedSocket();
	virtual ~ConnectedSocket();
	virtual void OnReceive(int nErrorCode);
};


