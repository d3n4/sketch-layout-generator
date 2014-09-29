@interface FBBezierContour : NSObject <NSCopying>
{
NSMutableArray *_overlaps;	// 8 = 0x8
NSMutableArray *_edges;	// 16 = 0x10
NSBezierPath *_bezPathCache;	// 24 = 0x18
struct CGRect _bounds;	// 32 = 0x20
struct CGRect _boundingRect;	// 64 = 0x40
int _inside;	// 96 = 0x60
}
+ (id)bezierContourWithCurve:(id)arg1;
@property(nonatomic) int inside; // @synthesize inside=_inside;
@property(readonly, nonatomic) NSArray *edges; // @synthesize edges=_edges;
- (void).cxx_destruct;
- (id)debugPathForWindingRuleContainmentAtEdge:(id)arg1 parameter:(double)arg2 point:(struct CGPoint)arg3 withTransform:(struct CGAffineTransform)arg4 andSizeTransform:(struct CGAffineTransform)arg5;
- (id)debugPathForWindingRuleContainmentWithTransform:(struct CGAffineTransform)arg1 andSizeTransform:(struct CGAffineTransform)arg2;
- (id)debugPathForJointsWithTransform:(struct CGAffineTransform)arg1 andSizeTransform:(struct CGAffineTransform)arg2;
- (id)debugPathForIntersectionType:(long long)arg1 withTransform:(struct CGAffineTransform)arg2 andSizeTransform:(struct CGAffineTransform)arg3;
- (id)description;
- (id)closestLocationToPoint:(struct CGPoint)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)doesOverlapContainParameter:(double)arg1 onEdge:(id)arg2;
- (BOOL)doesOverlapContainCrossing:(id)arg1;
- (void)forEachEdgeOverlapDo:(CDUnknownBlockType)arg1;
- (BOOL)isEquivalent:(id)arg1;
- (void)removeAllOverlaps;
- (void)addOverlap:(id)arg1;
- (void)addSelfIntersectingContoursToArray:(id)arg1 originalContour:(id)arg2;
@property(readonly, nonatomic) NSArray *selfIntersectingContours;
@property(readonly, nonatomic) NSArray *intersectingContours;
- (id)debugPathForContainmentOfCrossing:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (BOOL)containsCrossingUsingNonZeroWindingRule:(id)arg1;
- (long long)adjustWindingCount:(long long)arg1 forIntersection:(id)arg2;
- (id)crossingContainmentRay:(struct CGPoint)arg1;
- (BOOL)intersection:(id)arg1 isReallyTheSameAs:(id)arg2;
- (BOOL)containsPointUsingNonZeroWindingRule:(struct CGPoint)arg1;
- (BOOL)containsUsingNonZeroWindingRulePoint:(struct CGPoint)arg1 onEdge:(id)arg2 atParameter:(double)arg3;
- (BOOL)intersection:(id)arg1 isReallyTheSameAsCurve:(id)arg2 atParameter:(double)arg3;
- (long long)adjustWindingCount:(long long)arg1 onEdge:(id)arg2 atParameter:(double)arg3;
- (BOOL)isInflectionPointOnEdge:(id)arg1 atParameter:(double)arg2;
- (BOOL)markSelfCrossingsOnEdge:(id)arg1 startParameter:(double)arg2 stopParameter:(double)arg3 isEntry:(BOOL)arg4 withBlock:(CDUnknownBlockType)arg5;
- (void)markSelfCrossingsAsEntryOrExit;
- (BOOL)isCrossing:(id)arg1 betweenStartEdge:(id)arg2 parameter:(double)arg3 andCrossing:(id)arg4;
- (BOOL)crossesOwnContour:(id)arg1;
- (id)contourMadeClockwiseIfNecessary;
- (int)direction;
- (id)reversedContour;
@property(readonly, nonatomic) BOOL isClosed;
- (void)close;
- (id)bezierPathFromEdge:(id)arg1 toEdge:(id)arg2;
- (id)bezierPath;
- (BOOL)contourAndSelfIntersectingContoursContainPoint:(struct CGPoint)arg1;
- (BOOL)markCrossingsOnEdge:(id)arg1 startParameter:(double)arg2 stopParameter:(double)arg3 otherContours:(id)arg4 isEntry:(BOOL)arg5;
- (void)markCrossingsAsEntryOrExitWithContour:(id)arg1 markInside:(BOOL)arg2;
- (void)startingEdge:(id *)arg1 parameter:(double *)arg2 point:(struct CGPoint *)arg3 skipHorizontals:(BOOL)arg4 skipInflectionPoints:(BOOL)arg5;
- (struct CGPoint)testPointForContainment;
- (id)startEdgeSkipHorizontals:(BOOL)arg1 skipInflectionPoints:(BOOL)arg2;
- (id)startEdge;
- (void)intersectionsWithRay:(id)arg1 withBlock:(CDUnknownBlockType)arg2 callDepth:(unsigned long long)arg3;
- (unsigned long long)numberOfIntersectionsWithRay:(id)arg1 callDepth:(unsigned long long)arg2;
- (BOOL)containsPoint:(struct CGPoint)arg1 callDepth:(unsigned long long)arg2;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) struct CGPoint firstPoint;
@property(readonly, nonatomic) struct CGRect boundingRect;
@property(readonly, nonatomic) struct CGRect bounds;
- (void)addReverseCurveFrom:(id)arg1 to:(id)arg2;
- (void)addReverseCurve:(id)arg1;
- (void)addCurveFrom:(id)arg1 to:(id)arg2;
- (void)addCurve:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *overlaps_;
- (id)init;
@end
