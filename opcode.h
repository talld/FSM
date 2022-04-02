
typedef enum ENUM_OPCODE
{
	/* 0 range for                           */
	nop  = 0x00,
	/* 1 range for                           */
	/* 2 range for stack manipluation        */
	drop = 0x20, /*     ; (   a b -- a     ) */
	nip  = 0x21, /*     ; (   a b -- b     ) */
	dup  = 0x22, /*     ; (     a -- a a   ) */
	over = 0x23, /*     ; (   a b -- a b a ) */
	tuck = 0x24, /*     ; (   a b -- b a b ) */
        swap = 0x25, /*     ; (   a b -- b a   ) */
	lrot = 0x26, /*     ; ( a b c -- b c a ) */
	rrot = 0x27, /*     ; ( a b c -- c b a ) */
        pick = 0x28, /* imm ; ( * n * -- n * n ) */
	lrol = 0x29, /* imm ; ( n * * -- * * n ) */
	rrol = 0x2A, /* imm ; ( * * n -- n * * ) */
	2MSB = 0x2B, /*     ;                    */
	2MSC = 0x2C, /*     ;                    */
	2MSF = 0x2D, /*     ;                    */
	2MSE = 0x2E, /*     ;                    */
	2MSF = 0x2F, /*     ;                    */
	/* 3 range for memory management         */
	load = 0x30, /*     ; (     p -- n     ) */
	stor = 0x31, /*     ; (   p n --       ) */
	/* 4 range for                           */
	/* 5 range for                           */
	/* 6 range for                           */
	/* 7 range for                           */
	/* 8 range for                           */
	/* 9 range for                           */
	/* A range for arithmetic                */
	stow = 0xA0, /* imm ; (       -- n     ) */
	add  = 0xA1, /*     ; (   a b -- c     ) */
	sub  = 0xA2, /*     ; (       --       ) */
	/* B range for bitwise & boolean         */
	and  = 0xB0, /*     ; (   a b -- c     ) */
	or   = 0xB1, /*     ; (   a b -- c     ) */
	xor  = 0xB2, /*     ; (   a b -- c     ) */
	lsft = 0xB3, /*     ; (     a -- b     ) */
	rsft = 0xB4, /*     ; (     a -- b     ) */
	lrot = 0xB5, /*     ; (     a -- b     ) */
	rrot = 0xB6, /*     ; (     a -- b     ) */
	not  = 0xB7, /*     ; (     a -- b     ) */
	AMS8 = 0xB8, /*     ;                    */
	AMS9 = 0xB9, /*     ;                    */
	band = 0xBA, /*     ; (   a b -- c     ) */
	bor  = 0xBB, /*     ; (   a b -- c     ) */
	bnot = 0xBC, /*     ; (     b -- c     ) */
	bgt  = 0xBD, /*     ; (   a b -- c     ) */
	blt  = 0xBE, /*     ; (   a b -- c     ) */
	beq  = 0xBF, /*     ; (   a b -- c     ) */
	/* C range for control logic             */
	ret  = 0xC0, /*     ; (       --       ) */
	pop  = 0xC1, /* reg ; (     n --       ) */
	push = 0xC2, /* reg ; (       -- n     ) */
	bt   = 0xC3, /* off ; (     n -- r     ) */
	bf   = 0xC4, /* off ; (     n -- r     ) */
	jpt  = 0xC5, /* imm ; (     n --       ) */
	jpf  = 0xC6, /* imm ; (     n --       ) */
	/* D range for                           */
	/* E range for                           */
	/* F range for                           */
	end  = 0xFF,
} opcode_t;

