@interface PXListViewCell : NSView
{
NSString *_reusableIdentifier;	// 152 = 0x98
PXListView *_listView;	// 160 = 0xa0
unsigned long long _row;	// 168 = 0xa8
unsigned long long _dropHighlight;	// 176 = 0xb0
}
+ (id)cellLoadedFromNibNamed:(id)arg1 bundle:(id)arg2 reusableIdentifier:(id)arg3;
+ (id)cellLoadedFromNibNamed:(id)arg1 reusableIdentifier:(id)arg2;
@property(nonatomic) unsigned long long row; // @synthesize row=_row;
@property(copy, nonatomic) NSString *reusableIdentifier; // @synthesize reusableIdentifier=_reusableIdentifier;
@property(nonatomic) unsigned long long dropHighlight; // @synthesize dropHighlight=_dropHighlight;
@property(nonatomic) __weak PXListView *listView; // @synthesize listView=_listView;
- (void).cxx_destruct;
- (void)selectionDidChange;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)drawRect:(struct CGRect)arg1;
@property(readonly, nonatomic, getter=isSelected) BOOL selected;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReusableIdentifier:(id)arg1;
@end
