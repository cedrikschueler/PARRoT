import inet.common.INETDefs;
import inet.common.packet.chunk.Chunk;
import inet.networklayer.contract.ipv4.Ipv4Address;
namespace inet;

class MultiHopChirp extends FieldsChunk
{
    // Identification
    Ipv4Address origin;
    Ipv4Address hop;
    unsigned short squNr;

	// Fallback information
    // Information
    float x;
    float y;
    float z;
    float VX;
    float VY;
    float VZ;
    float gamma_mob; 
    
    // Route Information
    float value;

    // Message Lifetime
    unsigned short hopCount;
}