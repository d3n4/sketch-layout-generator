@interface KBDelayedPopUpButtonCell : NSButtonCell
{
BOOL delayMenu;	// 120 = 0x78
}
- (void)setDelayMenu:(BOOL)arg1;
- (BOOL)delayMenu;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)showMenuForEvent:(id)arg1 controlView:(id)arg2 cellFrame:(struct CGRect)arg3;
- (struct CGPoint)menuPositionForFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawImage:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (id)arrowBezierInRect:(struct CGRect)arg1;
- (id)initTextCell:(id)arg1;
@end
