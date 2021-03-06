@interface MSTextWindow : NSWindow
{
MSContentDrawView *_drawView;	// 256 = 0x100
NSTextView *_textView;	// 264 = 0x108
}
+ (struct CGRect)adjustFrameWidth:(struct CGRect)arg1 alignment:(unsigned long long)arg2;
+ (struct CGRect)adjustFrameHeight:(struct CGRect)arg1;
+ (struct CGRect)makeBiggerRect:(struct CGRect)arg1 withBehaviour:(long long)arg2 alignment:(unsigned long long)arg3;
@property(retain, nonatomic) NSTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) MSContentDrawView *drawView; // @synthesize drawView=_drawView;
- (void).cxx_destruct;
- (BOOL)canBecomeKeyWindow;
- (void)addTextView:(id)arg1;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2 animate:(BOOL)arg3;
- (void)moveToRect:(struct CGRect)arg1 drawViewRect:(struct CGRect)arg2 behaviour:(long long)arg3;
- (id)initWithRect:(struct CGRect)arg1 drawViewRect:(struct CGRect)arg2;
@end
