#ifndef GUARD_MYSTERY_GIFT_LINK_H
#define GUARD_MYSTERY_GIFT_LINK_H

#define MG_LINK_BUFFER_SIZE 0x400

// Send/receive ids for the Client/Server to make sure
// they're sending/receiving the same thing
enum {
    MG_LINKID_CLIENT_SCRIPT = 16,
    MG_LINKID_GAME_DATA,
    MG_LINKID_GAME_STAT,
    MG_LINKID_RESPONSE,
    MG_LINKID_READY_END,
    MG_LINKID_DYNAMIC_MSG,
    MG_LINKID_CARD,
    MG_LINKID_NEWS,
    MG_LINKID_STAMP,
    MG_LINKID_RAM_SCRIPT,
    MG_LINKID_EREADER_TRAINER,
    MG_LINKID_UNK_1,
    MG_LINKID_UNK_2,
};

struct MysteryGiftLink
{
    s32 state;
    u8 sendPlayerId;
    u8 recvPlayerId;
    u16 recvIdent;
    u16 recvCounter;
    u16 recvCRC;
    u16 recvSize;
    u16 sendIdent;
    u16 sendCounter;
    u16 sendCRC;
    u16 sendSize;
<<<<<<< HEAD
    void * recvBuffer;
    const void * sendBuffer;
=======
    void *recvBuffer;
    const void *sendBuffer;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    u32 (*recvFunc)(struct MysteryGiftLink *);
    u32 (*sendFunc)(struct MysteryGiftLink *);
};

<<<<<<< HEAD
void MysteryGiftLink_Init(struct MysteryGiftLink * link, u32 sendPlayerId, u32 recvPlayerId);
void MysteryGiftLink_InitSend(struct MysteryGiftLink * link, u32 ident, const void * src, u32 size);
bool32 MysteryGiftLink_Recv(struct MysteryGiftLink * link);
bool32 MysteryGiftLink_Send(struct MysteryGiftLink * link);
void MysteryGiftLink_InitRecv(struct MysteryGiftLink * link, u32 ident, void * dest);
=======
void MysteryGiftLink_Init(struct MysteryGiftLink *link, u32 sendPlayerId, u32 recvPlayerId);
void MysteryGiftLink_InitSend(struct MysteryGiftLink *link, u32 ident, const void *src, u32 size);
u32 MysteryGiftLink_Recv(struct MysteryGiftLink *link);
u32 MysteryGiftLink_Send(struct MysteryGiftLink *link);
void MysteryGiftLink_InitRecv(struct MysteryGiftLink *link, u32 ident, void *dest);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

#endif //GUARD_MYSTERY_GIFT_LINK_H
