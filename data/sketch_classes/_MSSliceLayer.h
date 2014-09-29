@interface _MSSliceLayer : MSLayer
{
BOOL _hasBackgroundColor;	// 56 = 0x38
MSColor *_backgroundColor;	// 64 = 0x40
}
@property(nonatomic) BOOL hasBackgroundColor; // @synthesize hasBackgroundColor=_hasBackgroundColor;
@property(copy, nonatomic) MSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
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
- (void)setPrimitiveHasBackgroundColor:(BOOL)arg1;
- (BOOL)primitiveHasBackgroundColor;
- (void)setPrimitiveBackgroundColor:(id)arg1;
- (id)primitiveBackgroundColor;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
@end
