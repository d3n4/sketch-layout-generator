@interface MSViewPort : NSObject
{
double _zoomValue;	// 8 = 0x8
struct CGPoint _scrollOrigin;	// 16 = 0x10
}
+ (double)cappedZoom:(double)arg1;
+ (id)viewPortWithScrollOrigin:(struct CGPoint)arg1 zoom:(double)arg2;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(nonatomic) struct CGPoint scrollOrigin; // @synthesize scrollOrigin=_scrollOrigin;
- (id)description;
- (BOOL)isEqual:(id)arg1;
@end
