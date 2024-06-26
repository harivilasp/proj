#ifndef __SERVER_STUB_H__
#define __SERVER_STUB_H__

#include <memory>

#include "ServerSocket.h"
#include "Messages.h"

class LoadServerStub
{
private:
	std::unique_ptr<ServerSocket> socket;

public:
	LoadServerStub();
	void Init(std::unique_ptr<ServerSocket> socket);
	CustomerRequest ReceiveRequest();
	int SendLaptop(LaptopInfo info);
	int ReturnRecord(CustomerRecord record);
	ReplicaRequest ReceiveReplicaRequest();
	int SendReplicaResponse(ReplicaResponse replicaResponse);
};

#endif // end of #ifndef __SERVER_STUB_H__
