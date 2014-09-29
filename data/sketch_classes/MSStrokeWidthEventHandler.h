@interface MSStrokeWidthEventHandler : MSEventHandler
{
MSShapeGroup *_shape;	// 128 = 0x80
unsigned long long _selectedHandle;	// 136 = 0x88
long long _selectedHandleSide;	// 144 = 0x90
}
@property(nonatomic) long long selectedHandleSide; // @synthesize selectedHandleSide=_selectedHandleSide;
@property(nonatomic) unsigned long long selectedHandle; // @synthesize selectedHandle=_selectedHandle;
@property(retain, nonatomic) MSShapeGroup *shape; // @synthesize shape=_shape;
- (void).cxx_destruct;
- (BOOL)shouldDrawLayerSelection;
- (void)drawInRect:(struct CGRect)arg1;
- (void)keyDown:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)delete:(id)arg1;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(int)arg2 flags:(unsigned long long)arg3;
- (double)positionOfPoint:(struct CGPoint)arg1 onPath:(id)arg2;
- (void)handlerWillLoseFocus;
- (void)handlerGotFocus;
@end
