@interface MSPointsEventHandler : MSEventHandler
{
MSLayer *layer;	// 128 = 0x80
long long selectedPoint;	// 136 = 0x88
NSMutableDictionary *currentSnaps;	// 144 = 0x90
BOOL firstDrag;	// 152 = 0x98
}
@property(nonatomic) long long selectedPoint; // @synthesize selectedPoint;
- (void).cxx_destruct;
- (struct CGPoint)convertPointToAbsoluteCoordinates:(struct CGPoint)arg1;
- (void)markLayerDirtyOfType:(unsigned long long)arg1;
- (void)_restoreForRedo:(id)arg1;
- (void)prepareForUndo;
- (struct CGPoint)snapPoint:(struct CGPoint)arg1 toLines:(id)arg2;
- (id)snapsForPoints:(id)arg1;
- (id)snapsForShape;
- (BOOL)useSnaps;
- (void)drawDotAtPoint:(struct CGPoint)arg1 index:(long long)arg2 selected:(BOOL)arg3;
- (void)drawHandles;
- (void)drawSnaps;
- (void)concatTransformsForDrawSnaps;
- (id)handleLinesPath;
- (id)handleLinesColor;
- (void)drawHandleLines;
- (void)drawInRect:(struct CGRect)arg1;
- (void)keyDown:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (struct CGPoint)adjustPoint:(struct CGPoint)arg1;
- (BOOL)shouldReturnToDefaultHandlerInCurrentState;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)refresh;
- (void)replacePointAtIndex:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (struct CGPoint)pointAtIndex:(unsigned long long)arg1;
- (BOOL)point:(struct CGPoint)arg1 isNearPoint:(struct CGPoint)arg2;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(int)arg2 flags:(unsigned long long)arg3;
- (long long)indexForMouse:(struct CGPoint)arg1;
- (BOOL)allowsEmptySelection;
- (struct CGPoint)relMouse:(struct CGPoint)arg1;
- (BOOL)shouldDrawLayerSelection;
- (void)sendUpdate;
- (id)bounds;
- (id)points;
- (void)setLayer:(id)arg1;
- (void)handlerWillLoseFocus;
- (void)handlerGotFocus;
- (id)layerFromSelectedLayers;
- (id)initWithManager:(id)arg1;
@end
