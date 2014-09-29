@interface MSRect : _MSRect
{
double proportions;	// 8 = 0x8
BOOL temporarilyConstrainProportions;	// 16 = 0x10
long long proportionsTempDisabled;	// 24 = 0x18
id _delegate;	// 32 = 0x20
}
+ (void)shouldNotifyRulerObservers:(BOOL)arg1;
+ (id)rectWithUnionOfRects:(id)arg1;
+ (id)rectWithRect:(struct CGRect)arg1;
+ (id)rectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)isIntegral;
- (void)setRectByIgnoringProportions:(struct CGRect)arg1;
- (void)setProportions:(double)arg1;
- (double)proportions;
- (void)setConstrainProportions:(BOOL)arg1;
- (void)setTemporarilyConstrainProportions:(BOOL)arg1;
- (void)calculateProportions;
@property(nonatomic) struct CGPoint mid; // @dynamic mid;
- (id)description;
- (void)log;
- (void)fill;
- (void)stroke;
- (BOOL)intersectsWithRect:(id)arg1;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)decodePropertiesUsingLegacyMethodWithCoder:(id)arg1;
- (void)decodePropertiesWithCoder:(id)arg1;
- (id)GKRect;
- (id)scaleBy:(double)arg1;
- (void)subtractHeight:(double)arg1;
- (void)addHeight:(double)arg1;
- (void)subtractWidth:(double)arg1;
- (void)addWidth:(double)arg1;
- (void)subtractY:(double)arg1;
- (void)addY:(double)arg1;
- (void)subtractX:(double)arg1;
- (void)addX:(double)arg1;
@property(nonatomic) double midY; // @dynamic midY;
@property(nonatomic) double midX; // @dynamic midX;
@property(nonatomic) double maxY; // @dynamic maxY;
@property(nonatomic) double minY; // @dynamic minY;
@property(nonatomic) double maxX; // @dynamic maxX;
@property(nonatomic) double minX; // @dynamic minX;
@property(nonatomic) double top; // @dynamic top;
@property(nonatomic) double left; // @dynamic left;
@property(nonatomic) struct CGPoint origin; // @dynamic origin;
@property(nonatomic) struct CGSize size; // @dynamic size;
- (void)makeRectIntegral;
- (void)makeOriginIntegral;
@property(nonatomic) struct CGRect rect; // @dynamic rect;
- (void)setY:(double)arg1;
- (void)setX:(double)arg1;
- (void)setHeight:(double)arg1;
- (void)setWidth:(double)arg1;
- (BOOL)shouldConstrainProportions;
- (void)disableProportionsTemporarily:(BOOL)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)objectDidInit;
- (id)initWithRect:(struct CGRect)arg1;
- (id)initWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)validateValues;
- (unsigned long long)decodingConversionForProperty:(id)arg1;
- (void)decodePropertiesWithPreDataObjectCoder:(id)arg1;
- (void)initLegacyWithCoder:(id)arg1;
// Remaining properties
@property(nonatomic) double bottom; // @dynamic bottom;
@property(nonatomic) double right; // @dynamic right;
@end
