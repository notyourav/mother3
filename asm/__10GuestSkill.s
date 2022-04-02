.include "asm/macros.inc"

.syntax unified
.section .text

	thumb_func_start __10GuestSkill
__10GuestSkill: @ 0x080809B8
	push {r4, lr}
	adds r4, r0, #0
	bl __4Base
	adds r1, r4, #0
	adds r1, #0x28
	movs r0, #0
	str r0, [r4, #0x28]
	str r0, [r1, #4]
	str r0, [r1, #8]
	adds r1, #0xc
	str r0, [r4, #0x34]
	str r0, [r1, #4]
	str r0, [r1, #8]
	ldr r0, _080809E0 @ =_vt.10GuestSkill
	str r0, [r4, #0x1c]
	adds r0, r4, #0
	pop {r4}
	pop {r1}
	bx r1
	.align 2, 0
_080809E0: .4byte _vt.10GuestSkill

	thumb_func_start sub_080809E4
sub_080809E4: @ 0x080809E4
	ldr r0, _080809E8 @ =gUnknown_02002520
	bx lr
	.align 2, 0
_080809E8: .4byte gUnknown_02002520

	thumb_func_start sub_080809EC
sub_080809EC: @ 0x080809EC
	push {lr}
	bl sub_080809E4
	pop {r1}
	bx r1
	.align 2, 0
