@interface MSListDocumentView : PXListDocumentView
{
}
- (void)dealloc;
- (void)windowFocusDidChange:(id)arg1;
- (void)awakeFromNib;
- (void)drawSelectionForRange:(struct _NSRange)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)backgroundColor;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)rightMouseDown:(id)arg1;
- (id)menuForEvent:(id)arg1;
@end
