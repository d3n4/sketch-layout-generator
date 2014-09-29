@interface _MSExportSize : MSModelObject
{
NSString *_format;	// 8 = 0x8
NSString *_name;	// 16 = 0x10
double _scale;	// 24 = 0x18
long long _visibleScaleType;	// 32 = 0x20
}
@property(nonatomic) long long visibleScaleType; // @synthesize visibleScaleType=_visibleScaleType;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
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
- (void)setPrimitiveVisibleScaleType:(long long)arg1;
- (long long)primitiveVisibleScaleType;
- (void)setPrimitiveScale:(double)arg1;
- (double)primitiveScale;
- (void)setPrimitiveName:(id)arg1;
- (id)primitiveName;
- (void)setPrimitiveFormat:(id)arg1;
- (id)primitiveFormat;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
@end
