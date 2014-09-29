@interface _MSStyleBasicFill : MSStylePart
{
MSColor *_color;	// 8 = 0x8
MSGraphicsContextSettings *_contextSettings;	// 16 = 0x10
unsigned long long _fillType;	// 24 = 0x18
MSGradient *_gradient;	// 32 = 0x20
}
@property(retain, nonatomic) MSGradient *gradient; // @synthesize gradient=_gradient;
@property(nonatomic) unsigned long long fillType; // @synthesize fillType=_fillType;
@property(retain, nonatomic) MSGraphicsContextSettings *contextSettings; // @synthesize contextSettings=_contextSettings;
@property(copy, nonatomic) MSColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveGradient:(id)arg1;
- (id)primitiveGradient;
- (void)setPrimitiveFillType:(unsigned long long)arg1;
- (unsigned long long)primitiveFillType;
- (void)setPrimitiveContextSettings:(id)arg1;
- (id)primitiveContextSettings;
- (void)setPrimitiveColor:(id)arg1;
- (id)primitiveColor;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
@end
