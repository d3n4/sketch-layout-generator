@interface PXListView : NSScrollView
{
id <PXListViewDelegate> _delegate;	// 232 = 0xe8
NSMutableArray *_reusableCells;	// 240 = 0xf0
NSMutableArray *_visibleCells;	// 248 = 0xf8
struct _NSRange _currentRange;	// 256 = 0x100
unsigned long long _numberOfRows;	// 272 = 0x110
NSMutableIndexSet *_selectedRows;	// 280 = 0x118
struct _NSRange _visibleRange;	// 288 = 0x120
double _totalHeight;	// 304 = 0x130
double *_cellYOffsets;	// 312 = 0x138
double _cellSpacing;	// 320 = 0x140
BOOL _allowsEmptySelection;	// 328 = 0x148
BOOL _allowsMultipleSelection;	// 329 = 0x149
long long _lastSelectedRow;	// 336 = 0x150
BOOL _verticalMotionCanBeginDrag;	// 344 = 0x158
BOOL _usesLiveResize;	// 345 = 0x159
double _widthPriorToResize;	// 352 = 0x160
unsigned long long _dropRow;	// 360 = 0x168
unsigned long long _dropHighlight;	// 368 = 0x170
}
@property(nonatomic) BOOL usesLiveResize; // @synthesize usesLiveResize=_usesLiveResize;
@property(nonatomic) BOOL verticalMotionCanBeginDrag; // @synthesize verticalMotionCanBeginDrag=_verticalMotionCanBeginDrag;
@property(nonatomic) BOOL allowsEmptySelection; // @synthesize allowsEmptySelection=_allowsEmptySelection;
@property(nonatomic) BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(nonatomic) double cellSpacing; // @synthesize cellSpacing=_cellSpacing;
- (void).cxx_destruct;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)windowSizing:(id)arg1;
- (void)viewDidEndLiveResize;
- (void)layoutCellsForResizeEvent;
- (void)viewWillStartLiveResize;
- (void)scrollRowToVisible:(unsigned long long)arg1;
- (void)contentViewBoundsDidChange:(id)arg1;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)layoutCell:(id)arg1 atRow:(unsigned long long)arg2;
- (void)layoutCells;
- (void)cacheCellLayout;
- (struct CGRect)rectOfRow:(unsigned long long)arg1;
- (struct CGRect)contentViewRect;
- (void)postSelectionDidChangeNotification;
- (void)deselectRows;
- (void)deselectRowIndexes:(id)arg1;
- (void)selectRowIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;
@property(retain, nonatomic) NSIndexSet *selectedRows;
@property(nonatomic) unsigned long long selectedRow;
- (void)deselectAll:(id)arg1;
- (void)updateCells;
- (void)addCellsFromVisibleRange;
- (id)visibleCellsForRowIndexes:(id)arg1;
- (id)cellForRowAtIndex:(unsigned long long)arg1;
- (id)visibleCellForRow:(unsigned long long)arg1;
- (struct _NSRange)visibleRange;
- (id)visibleCells;
- (id)dequeueCellWithReusableIdentifier:(id)arg1;
- (void)enqueueCell:(id)arg1;
- (unsigned long long)numberOfRows;
- (void)reloadData;
- (void)reloadRowAtIndex:(long long)arg1;
@property(nonatomic) __weak id <PXListViewDelegate> delegate;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setDropRow:(unsigned long long)arg1 dropHighlight:(unsigned long long)arg2;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)cellForDropHighlight:(unsigned long long *)arg1 row:(unsigned long long *)arg2;
- (unsigned long long)indexOfRowAtPoint:(struct CGPoint)arg1 returningProposedDropHighlight:(unsigned long long *)arg2;
- (void)setShowsDropHighlight:(BOOL)arg1;
- (id)dragImageForRowsWithIndexes:(id)arg1 event:(id)arg2 clickedCell:(id)arg3 offset:(struct CGPoint *)arg4;
- (BOOL)attemptDragWithMouseDown:(id)arg1 inCell:(id)arg2;
- (void)handleMouseDownOutsideCells:(id)arg1;
- (void)handleMouseDown:(id)arg1 inCell:(id)arg2;
- (void)handleMouseDragged:(id)arg1 inCell:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)canBecomeKeyView;
@end
