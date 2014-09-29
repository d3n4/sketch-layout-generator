@interface MSBitmapBackedRendering : NSObject
{
}
+ (void)renderLayer:(id)arg1 inRect:(struct CGRect)arg2 baseContext:(id)arg3;
+ (id)basicImageForLayer:(id)arg1 context:(id)arg2;
+ (id)CIContextWithContextRef:(struct CGContext *)arg1 colorSpace:(id)arg2;
+ (id)renderEffectsFromLayer:(id)arg1 context:(id)arg2;
+ (id)imageToCacheForLayer:(id)arg1 context:(id)arg2;
@end
