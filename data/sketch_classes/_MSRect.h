@interface _MSRect : MSModelObject
{
BOOL _constrainProportions;	// 8 = 0x8
double _height;	// 16 = 0x10
double _width;	// 24 = 0x18
double _x;	// 32 = 0x20
double _y;	// 40 = 0x28
}
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) BOOL constrainProportions; // @synthesize constrainProportions=_constrainProportions;
- (BOOL)isEqualForSync:(id)arg1;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveY:(double)arg1;
- (double)primitiveY;
- (void)setPrimitiveX:(double)arg1;
- (double)primitiveX;
- (void)setPrimitiveWidth:(double)arg1;
- (double)primitiveWidth;
- (void)setPrimitiveHeight:(double)arg1;
- (double)primitiveHeight;
- (void)setPrimitiveConstrainProportions:(BOOL)arg1;
- (BOOL)primitiveConstrainProportions;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
@end
