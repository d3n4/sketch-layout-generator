@interface FBEdgeOverlapRun : NSObject
{
NSMutableArray *_overlaps;	// 8 = 0x8
}
+ (id)overlapRun;
@property(readonly, nonatomic) NSArray *overlaps; // @synthesize overlaps=_overlaps;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) FBBezierContour *contour2;
@property(readonly, nonatomic) FBBezierContour *contour1;
- (id)middleIntersection;
- (void)addCrossings;
- (BOOL)isCrossingUsingNonZeroWindingRule;
- (BOOL)isCrossingWithCallDepth:(unsigned long long)arg1;
- (BOOL)isCrossing;
- (BOOL)isCrossingWithTangentsOnly;
- (BOOL)doesContainParameter:(double)arg1 onEdge:(id)arg2;
- (BOOL)doesContainCrossing:(id)arg1;
- (BOOL)isComplete;
- (BOOL)insertOverlap:(id)arg1;
- (id)init;
@end
