@interface MSGradient : _MSGradient
{
BOOL svgPositionIsAbsolute;	// 8 = 0x8
double opacity;	// 16 = 0x10
}
@property(readonly, nonatomic) double opacity; // @synthesize opacity;
@property(nonatomic) BOOL svgPositionIsAbsolute; // @synthesize svgPositionIsAbsolute;
- (BOOL)hasOpacity;
- (void)setGradientType:(long long)arg1;
- (double)convertPointToPosition:(struct CGPoint)arg1;
- (void)_removeStopAtIndex:(unsigned long long)arg1;
- (void)_insertStop:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_addStop:(id)arg1;
- (void)removeStopAtIndex:(unsigned long long)arg1;
- (unsigned long long)addStopAtLength:(double)arg1;
- (long long)addStopAtPosition:(struct CGPoint)arg1;
- (void)setColor:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)colorAtIndex:(unsigned long long)arg1;
- (id)stopAtIndex:(unsigned long long)arg1;
- (void)setPoint:(struct CGPoint)arg1 atIndex:(unsigned long long)arg2;
- (struct CGPoint)pointAtIndex:(unsigned long long)arg1;
- (void)gradientPointArray:(id)arg1 replacePointAtIndex:(unsigned long long)arg2 withPoint:(struct CGPoint)arg3;
- (double)elipseLength;
- (id)points;
- (void)rotatePointsBy:(long long)arg1;
- (void)invert;
- (id)NSGradientWithColorSpace:(id)arg1;
- (void)handleLightweightObjectChangeForKey:(id)arg1 sender:(id)arg2;
- (BOOL)canSmoothOpacity;
- (id)gradientFromStops:(id)arg1 colorSpace:(id)arg2;
- (BOOL)hasDefaultValues;
- (id)defaultStopsArray;
- (id)initBlankGradient;
- (long long)indexInPoints:(struct CGPoint *)arg1 closestToPoint:(struct CGPoint)arg2;
- (id)CSSColorStopsStringWithMasterAlpha:(double)arg1;
- (id)radialCSSGradientStringWithMasterAlpha:(double)arg1;
- (id)linearCSSGradientStringForAgent:(id)arg1 withMasterAlpha:(double)arg2;
- (id)gradientStringForAgent:(id)arg1 withMasterAlpha:(double)arg2;
- (id)CSSAttributeStringWithMasterAlpha:(double)arg1;
- (unsigned long long)decodingConversionForProperty:(id)arg1;
- (float)safeDecodeFloatInCoder:(id)arg1 forKey:(id)arg2;
- (void)initLegacyWithCoder:(id)arg1;
- (id)elipseTransformInRect:(struct CGRect)arg1;
- (id)NSGradientForContext:(id)arg1;
- (void)setHasDonePreRenderingForContext:(id)arg1;
- (id)keyForContext:(id)arg1;
- (BOOL)hasDonePreRenderingForContext:(id)arg1;
- (void)drawAngularGradientInRect:(struct CGRect)arg1 context:(id)arg2;
- (void)drawRadialFillInRect:(struct CGRect)arg1 context:(id)arg2 gradient:(id)arg3;
- (void)drawLinearFillInRect:(struct CGRect)arg1 gradient:(id)arg2;
- (void)_drawFillInRect:(struct CGRect)arg1 forBorderThickness:(double)arg2 context:(id)arg3 gradient:(id)arg4;
- (void)preRenderInRect:(struct CGRect)arg1 context:(id)arg2;
- (void)drawFillInRect:(struct CGRect)arg1 forBorderThickness:(double)arg2 context:(id)arg3;
- (id)interpolatedStartAndStopColorForStops:(id)arg1 context:(id)arg2;
- (struct CGImage *)newAngularGradientImageInRect:(struct CGRect)arg1 stops:(id)arg2 context:(id)arg3;
- (id)sortedStops;
- (id)angularGradientImageInRect:(struct CGRect)arg1 context:(id)arg2;
- (id)angularGradientImageInRect:(struct CGRect)arg1 context:(id)arg2 shouldCache:(BOOL)arg3;
// Remaining properties
@property(nonatomic) BOOL shouldSmoothenOpacity;
@end
