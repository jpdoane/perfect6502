#ifndef INCLUDED_FROM_NETLIST_SIM_C
#define state_t void
#endif

extern state_t *initAndResetChip();
extern void destroyChip(state_t *state);
extern void step(state_t *state);
extern void chipStatus(state_t *state);
extern unsigned short readPC(state_t *state);
extern unsigned char readA(state_t *state);
extern unsigned char readX(state_t *state);
extern unsigned char readY(state_t *state);
extern unsigned char readSP(state_t *state);
extern unsigned char readP(state_t *state);
extern unsigned int readRW(state_t *state);
extern unsigned char readALU(state_t *state);
extern unsigned char readSB(state_t *state);
extern unsigned short readAddressBus(state_t *state);
extern void writeDataBus(state_t *state, unsigned char);
extern unsigned char readDataBus(state_t *state);
extern unsigned char readIR(state_t *state);
extern unsigned char readTstate(state_t *state);

extern void setNRES(state_t *state, unsigned int nres);
extern void setRDY(state_t *state, unsigned int rdy);
extern void setIRQ(state_t *state, unsigned int irq);
extern void setNMI(state_t *state, unsigned int nmi);
extern void setNSO(state_t *state, unsigned int nso);
extern unsigned int readclkm1(state_t *state);
extern unsigned int readclkm2(state_t *state);
extern unsigned int readSYNC(state_t *state);

extern unsigned char memory[65536];
extern unsigned int cycle;
extern unsigned int transistors;
