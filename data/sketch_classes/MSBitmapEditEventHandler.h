@interface MSBitmapEditEventHandler : MSEventHandler <MSModeModePickerDelegate, BCPopoverDelegate, MSColorInspectorDelegate>
{
long long _currentMode;	// 128 = 0x80
NSBezierPath *_accumulatedSelection;	// 136 = 0x88
MSModePickerView *_pickerView;	// 144 = 0x90
NSButton *_rectSelectionButton;	// 152 = 0x98
NSButton *_magicWandButton;	// 160 = 0xa0
NSColorSpace *_colorSpace;	// 168 = 0xa8
MSBitmapRectangleEditor *_rectangleEditor;	// 176 = 0xb0
MSBitmapMagicWandEditor *_magicWandEditor;	// 184 = 0xb8
BCPopover *_popover;	// 192 = 0xc0
NSBitmapImageRep *_backupImageRep;	// 200 = 0xc8
NSCursor *_currentCursor;	// 208 = 0xd0
}
@property(retain, nonatomic) NSCursor *currentCursor; // @synthesize currentCursor=_currentCursor;
@property(retain, nonatomic) NSBitmapImageRep *backupImageRep; // @synthesize backupImageRep=_backupImageRep;
@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) MSBitmapMagicWandEditor *magicWandEditor; // @synthesize magicWandEditor=_magicWandEditor;
@property(retain, nonatomic) MSBitmapRectangleEditor *rectangleEditor; // @synthesize rectangleEditor=_rectangleEditor;
@property(retain, nonatomic) NSColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(retain, nonatomic) NSButton *magicWandButton; // @synthesize magicWandButton=_magicWandButton;
@property(retain, nonatomic) NSButton *rectSelectionButton; // @synthesize rectSelectionButton=_rectSelectionButton;
@property(retain, nonatomic) MSModePickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) NSBezierPath *accumulatedSelection; // @synthesize accumulatedSelection=_accumulatedSelection;
@property(nonatomic) long long currentMode; // @synthesize currentMode=_currentMode;
- (void).cxx_destruct;
- (BOOL)shouldHideExportBar;
- (id)crossHairCursorRemove;
- (id)crossHairCursorAdd;
- (id)crossHairCursor;
- (id)magicWandCursorRemove;
- (id)magicWandCursorAdd;
- (id)magicWandCursor;
- (BOOL)inspectorShouldShowLayerSpecificProperties;
- (unsigned long long)inspectorLocation;
- (id)nibName;
- (struct CGPoint)centerPointForZooming;
- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (void)markImageAsEdited;
- (id)bitmapLayer;
- (id)coordinateTransformMatrix;
- (void)drawInRect:(struct CGRect)arg1;
- (BOOL)shouldDrawLayerSelection;
- (id)selectionBezierForFlippingCoordinates;
- (struct CGRect)imageBounds;
- (struct CGSize)imageSize;
- (void)fillSelectionWithColor:(id)arg1 blending:(unsigned long long)arg2;
- (void)fillSelectionWithColor:(id)arg1;
- (id)imageFromSelectedArea;
- (void)duplicate:(id)arg1;
- (void)paste:(id)arg1;
- (struct CGRect)rectFromBitmapToLayerCoordinates:(struct CGRect)arg1;
- (id)bitmapLayerFromSelectedArea;
- (void)copy:(id)arg1;
- (BOOL)rectHasBeenCropped:(struct CGRect)arg1 fromImage:(id)arg2;
- (void)cropLayerFrame;
- (void)clearAreaUnderSelection;
- (void)cut:(id)arg1;
- (void)keyDown:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)selectLayerBelowPoint:(struct CGPoint)arg1;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(int)arg2 flags:(unsigned long long)arg3;
- (void)flagsChanged:(id)arg1;
- (BOOL)mouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)finishEditing:(id)arg1;
- (void)vectorizeAction:(id)arg1;
- (void)colorInspector:(id)arg1 didChangeToColor:(id)arg2;
- (void)popoverWillClose:(id)arg1;
- (void)colorMagnifierAction:(id)arg1;
- (void)colorizeAction:(id)arg1;
- (void)makeNewBackupImage;
- (void)cropAction:(id)arg1;
- (void)setImage:(id)arg1 forBitmapLayer:(id)arg2;
- (void)invertAction:(id)arg1;
- (void)magicWandAction:(id)arg1;
- (void)rectSelectionAction:(id)arg1;
- (void)pickerViewChanged:(id)arg1;
- (id)pickerView:(id)arg1 labelForMode:(long long)arg2;
- (void)handlerWillLoseFocus;
- (id)toolbarIdentifier;
- (void)validateButtons;
- (void)awakeFromNib;
- (void)handlerGotFocus;
@end
