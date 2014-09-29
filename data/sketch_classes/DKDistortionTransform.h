@interface DKDistortionTransform : NSObject <NSCoding, NSCopying>
{
struct CGPoint m_q[4];	// 8 = 0x8
BOOL m_inverted;	// 72 = 0x48
}
+ (id)transformWithInitialRect:(struct CGRect)arg1;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)transformBezierPath:(id)arg1 inRect:(struct CGRect)arg2;
- (id)transformBezierPath:(id)arg1;
- (struct CGPoint)transformPoint:(struct CGPoint)arg1 fromRect:(struct CGRect)arg2;
- (void)invert;
- (void)differentialPerspectiveBy:(double)arg1;
- (void)shearVerticallyBy:(double)arg1;
- (void)shearHorizontallyBy:(double)arg1;
- (void)offsetByX:(double)arg1 byY:(double)arg2;
- (struct CGRect)bounds;
- (void)getEnvelopePoints:(struct CGPoint *)arg1;
- (void)setEnvelopePoints:(struct CGPoint *)arg1;
- (id)initWithEnvelope:(struct CGPoint *)arg1;
- (id)initWithRect:(struct CGRect)arg1;
@end
