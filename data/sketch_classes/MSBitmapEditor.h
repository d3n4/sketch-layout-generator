@interface MSBitmapEditor : NSObject
{
MSBitmapEditEventHandler *_eventHandler;	// 8 = 0x8
}
@property(nonatomic) __weak MSBitmapEditEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (struct CGRect)imageBounds;
- (struct CGSize)imageSize;
- (double)zoomValue;
- (void)drawMarchingAntsForPath:(id)arg1;
- (struct CGPoint)pointInBitmapLayer:(struct CGPoint)arg1;
- (struct CGRect)rectFromBitmapToLayerCoordinates:(struct CGRect)arg1;
- (void)refreshRectInBitmapCoordinates:(struct CGRect)arg1;
@property(retain, nonatomic) NSBezierPath *accumulatedSelection; // @dynamic accumulatedSelection;
@property(readonly, nonatomic) MSBitmapLayer *bitmapLayer; // @dynamic bitmapLayer;
- (void)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)mouseDragged:(struct CGPoint)arg1;
- (void)mouseDown:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)draw;
@end
