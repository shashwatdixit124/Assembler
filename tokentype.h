#ifndef TOKENTYPE_H
#define TOKENTYPE_H

typedef enum TokenType
{
    INVALID,
    // dyadic operations
    ADD,
    CMP,
    DIV,
    LDB,
    LDW,
    MOV,
    MUL,
    STB,
    STW,
    SUB,
    
    // monadic operations
    CAL,
    DEC,
    INC,
    JMP,
    JEQ,
    JNE,
    JLT,
    JGT,
    POP,
    PSH,

    // 0 address operations
    HLT,
    MSF,
    RET,
    
    // Registers
    R0,
    R1,
    R2,
    R4,
    R5,
    R6,
    R7,
    R8,
    R9,
    R10,
    R11,
    R12,
    R13,
    R14,
    R15,
    PC,
    IR,
    MAR,
    MDR,
    CLK,
    MKEY,
    SP,
    FLG,
    
    // extras
    AT,
    COMMA,
    HASH,
    LABEL,
    STRING,
    NEXT
} TokenType;

#endif
