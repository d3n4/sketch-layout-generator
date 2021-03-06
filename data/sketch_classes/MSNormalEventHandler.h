@interface MSNormalEventHandler : MSNormalBaseEventHandler
{
BOOL _ignoreNextKeyDownEventUntilModifiersChange;	// 128 = 0x80
BOOL _nextModifierKeyChangeShouldRefreshView;	// 129 = 0x81
BOOL _didDuplicate;	// 130 = 0x82
BOOL _firstMouseDraggedMoveLayers;	// 131 = 0x83
BOOL _didDuplicateWhenMovingLayers;	// 132 = 0x84
MSLayerPositionDrawing *_positionDrawing;	// 136 = 0x88
MSLayer *_hoveringLayer;	// 144 = 0x90
MSNormalEventContextualMenuBuilder *_menuBuilder;	// 152 = 0x98
MSNormalEventData *_eventData;	// 160 = 0xa0
id _duplicatedObjectID;	// 168 = 0xa8
NSMutableDictionary *_originalDraggedLocations;	// 176 = 0xb0
NSArray *_duplicatedLayers;	// 184 = 0xb8
struct CGSize _duplicateOffset;	// 192 = 0xc0
struct CGPoint _duplicateOrigin;	// 208 = 0xd0
struct CGPoint _lastMouseMoved;	// 224 = 0xe0
}
@property(retain, nonatomic) NSArray *duplicatedLayers; // @synthesize duplicatedLayers=_duplicatedLayers;
@property(nonatomic) BOOL didDuplicateWhenMovingLayers; // @synthesize didDuplicateWhenMovingLayers=_didDuplicateWhenMovingLayers;
@property(retain, nonatomic) NSMutableDictionary *originalDraggedLocations; // @synthesize originalDraggedLocations=_originalDraggedLocations;
@property(retain, nonatomic) id duplicatedObjectID; // @synthesize duplicatedObjectID=_duplicatedObjectID;
@property(nonatomic) struct CGPoint lastMouseMoved; // @synthesize lastMouseMoved=_lastMouseMoved;
@property(nonatomic) BOOL firstMouseDraggedMoveLayers; // @synthesize firstMouseDraggedMoveLayers=_firstMouseDraggedMoveLayers;
@property(nonatomic) struct CGPoint duplicateOrigin; // @synthesize duplicateOrigin=_duplicateOrigin;
@property(nonatomic) BOOL didDuplicate; // @synthesize didDuplicate=_didDuplicate;
@property(nonatomic) struct CGSize duplicateOffset; // @synthesize duplicateOffset=_duplicateOffset;
@property(nonatomic) BOOL nextModifierKeyChangeShouldRefreshView; // @synthesize nextModifierKeyChangeShouldRefreshView=_nextModifierKeyChangeShouldRefreshView;
@property(retain, nonatomic) MSNormalEventData *eventData; // @synthesize eventData=_eventData;
@property(retain, nonatomic) MSNormalEventContextualMenuBuilder *menuBuilder; // @synthesize menuBuilder=_menuBuilder;
@property(retain, nonatomic) MSLayer *hoveringLayer; // @synthesize hoveringLayer=_hoveringLayer;
@property(retain, nonatomic) MSLayerPositionDrawing *positionDrawing; // @synthesize positionDrawing=_positionDrawing;
- (void).cxx_destruct;
- (BOOL)shouldHideExportBar;
- (void)currentPageDidChange;
- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (void)cut:(id)arg1;
- (BOOL)layerCanBeSelected:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)refreshMultipleLayerSelectionOfType:(unsigned long long)arg1;
- (void)refreshMultipleLayers:(id)arg1 ofType:(unsigned long long)arg2;
- (id)layerSnapper;
- (void)changeColor:(id)arg1;
- (void)deleteNormalLayers:(id)arg1;
- (void)deleteArtboards:(id)arg1;
- (id)document;
- (void)deleteLayers:(id)arg1;
- (void)delete:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (id)menu;
- (void)selectAll:(id)arg1;
- (void)ignoreNextKeyDownEventUntilModifiersChange;
- (void)duplicateSelectedLayersInOriginalLocation:(BOOL)arg1;
- (void)flagsChangedDuringMove:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1;
- (void)drawSubPathsForGroup:(id)arg1;
- (void)drawDragSelection;
- (struct CGRect)rectForDrawingDragSelectOrZoom;
- (void)drawMultipleSelection;
- (void)drawLayerHover;
- (void)drawLayerSelection;
- (id)layerBelowPoint:(struct CGPoint)arg1 forceClickthrough:(BOOL)arg2;
- (void)deselectAllLayers;
- (id)allLayersWithForcedClickThrough:(BOOL)arg1;
- (id)selectedLayers;
- (void)duplicate:(id)arg1;
- (void)keyDownMoveCanvasIncremental:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)keyDownMoveToEndOfCanvas:(unsigned short)arg1;
- (void)keyDownMoveCanvas:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)flashSnapsForLayer:(id)arg1;
- (double)opacityFromChar:(unsigned short)arg1;
- (void)adjustOpacityIfNumberKeyIsPressed:(unsigned short)arg1;
- (void)keyDownResizeLayers:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (id)parentArtboardWeCanMoveLayersTo:(id)arg1;
- (void)moveLayersToArtboardAsOne:(id)arg1;
- (void)keyDownMoveLayers:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)escapeKeyPressed;
- (void)keyDown:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)setHoveringLayerAndRefresh:(id)arg1;
- (BOOL)isMouseHoveringMultipleSelectedLayerCorner:(struct CGPoint)arg1;
- (BOOL)isMouseHoveringLayer:(id)arg1 corner:(struct CGPoint)arg2 flags:(unsigned long long)arg3;
- (BOOL)isMouseHoveringLayerCorner:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)shouldNotChangeSelectionForFlags:(unsigned long long)arg1;
- (BOOL)absoluteMouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)resetClickThroughs;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)mouseExited;
- (void)selectLayer:(id)arg1;
- (void)mouseDraggedSelectLayers:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (id)rectForDragSelectionOrZoom:(struct CGPoint)arg1;
- (void)moveLayer:(id)arg1 from:(struct CGPoint)arg2 inAbsoluteCoodinatesBy:(struct CGPoint)arg3;
- (void)mouseDraggedMoveLayers:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (struct CGPoint)alignPoint:(struct CGPoint)arg1 withShiftTo:(struct CGPoint)arg2;
- (void)refreshPositionDrawingIfApplicable:(unsigned long long)arg1;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)recordSelectedLayerLocations;
- (void)mouseDownMoveLayers:(struct CGPoint)arg1 clickCount:(long long)arg2 flags:(unsigned long long)arg3;
- (void)mouseDownDoubleClick:(struct CGPoint)arg1 onLayer:(id)arg2;
- (void)mouseDownSelectLayers:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(int)arg2 flags:(unsigned long long)arg3;
- (void)handlerWillLoseFocus;
- (void)handlerGotFocus;
- (id)toolbarIdentifier;
- (void)dealloc;
- (id)initWithManager:(id)arg1;
@end
