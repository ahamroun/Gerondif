// ListenerSocket.cpp�: fichier d'impl�mentation
//

#include "stdafx.h"
#include "ListenerSocket.h"
#include "ConnectedSocket.h"


// ListenerSocket

ListenerSocket::ListenerSocket()
{
}

ListenerSocket::~ListenerSocket()
{
}

void ListenerSocket::OnAccept(int nErrorCode) {
	ConnectedSocket* pConnectedSock = new ConnectedSocket();

	CString strPeerName;
	UINT uiPort;

	if(Accept(*pConnectedSock)) {
		pConnectedSock->GetPeerName(strPeerName, uiPort);
	}

	CAsyncSocket::OnAccept(nErrorCode);
}


// Fonctions membres ListenerSocket
