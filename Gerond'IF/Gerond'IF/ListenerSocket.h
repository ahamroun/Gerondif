#pragma once

// Cible de la commande ListenerSocket

class ListenerSocket : public CAsyncSocket
{
public:
	ListenerSocket();
	virtual ~ListenerSocket();
	virtual void OnAccept(int nErrorCode);
};


