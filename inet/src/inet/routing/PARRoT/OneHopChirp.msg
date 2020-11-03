import inet.common.INETDefs;
import inet.common.packet.chunk.Chunk;
import inet.networklayer.contract.ipv4.Ipv4Address;
namespace inet;

class OneHopChirp extends FieldsChunk
{
    // Identification
    Ipv4Address origin;
    Ipv4Address destination;
}