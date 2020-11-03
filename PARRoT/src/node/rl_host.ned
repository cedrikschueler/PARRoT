package parrot.node;

import inet.routing.PARRoT.PARRoT;
import inet.node.inet.AdhocHost;

module parrot_host extends AdhocHost
{
    parameters:
        @networkNode;
    submodules:
        router: PARRoT {
            @display("p=825,226");
        }
	connections:
    	router.ipOut --> tn.in++;
        router.ipIn <-- tn.out++;
}
