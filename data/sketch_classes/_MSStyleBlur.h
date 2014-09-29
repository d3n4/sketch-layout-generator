@interface _MSStyleBlur : MSStylePart
{
double _motionAngle;	// 8 = 0x8
double _radius;	// 16 = 0x10
unsigned long long _type;	// 24 = 0x18
struct CGPoint _center;	// 32 = 0x20
}
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) double motionAngle; // @synthesize motionAngle=_motionAngle;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
- (BOOL)isEqualForSync:(id)arg1;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveType:(unsigned long long)arg1;
- (unsigned long long)primitiveType;
- (void)setPrimitiveRadius:(double)arg1;
- (double)primitiveRadius;
- (void)setPrimitiveMotionAngle:(double)arg1;
- (double)primitiveMotionAngle;
- (void)setPrimitiveCenter:(struct CGPoint)arg1;
- (struct CGPoint)primitiveCenter;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
@end
