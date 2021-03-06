@interface FBBezierGraph : NSObject
{
NSMutableArray *_contours;	// 8 = 0x8
struct CGRect _bounds;	// 16 = 0x10
}
+ (id)bezierGraph;
+ (id)bezierGraphWithBezierPath:(id)arg1;
@property(readonly, nonatomic) NSArray *contours; // @synthesize contours=_contours;
- (void).cxx_destruct;
- (id)description;
- (void)debugFindCurvesThatShouldIntersectWith:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)debuggingInsertIntersectionsWithBezierGraph:(id)arg1;
- (void)debuggingInsertCrossingsForFillConversion;
- (void)debuggingInsertCrossingsWithBezierGraph:(id)arg1 markInside:(BOOL)arg2 markOtherInside:(BOOL)arg3;
- (void)debuggingInsertCrossingsForDifferenceWithBezierGraph:(id)arg1;
- (void)debuggingInsertCrossingsForIntersectWithBezierGraph:(id)arg1;
- (void)debuggingInsertCrossingsForUnionWithBezierGraph:(id)arg1;
- (id)nonselfIntersectingContours;
- (id)nonintersectingContours;
- (void)addContour:(id)arg1;
- (void)removeOverlaps;
- (void)removeCrossings;
- (id)bezierGraphFromNonselfIntersections:(BOOL)arg1;
- (id)firstUnprocessedCrossing:(BOOL)arg1;
- (void)markAllCrossingsAsUnprocessed;
- (void)removeCrossings:(id)arg1 forContours:(id)arg2;
- (void)removeContoursThatDontContain:(id)arg1;
- (void)removeContourCrossings:(id)arg1 thatDontAppearIn:(id)arg2;
- (id)contoursFromCrossings:(id)arg1;
- (BOOL)eliminateContainers:(id)arg1 thatDontContainContour:(id)arg2 usingRay:(id)arg3;
- (unsigned long long)numberOfTimesContour:(id)arg1 appearsInCrossings:(id)arg2;
- (BOOL)findCrossingsOnContainers:(id)arg1 onRay:(id)arg2 beforeMinimum:(struct CGPoint)arg3 afterMaximum:(struct CGPoint)arg4 crossingsBefore:(id)arg5 crossingsAfter:(id)arg6;
- (BOOL)findBoundsOfContour:(id)arg1 onRay:(id)arg2 minimum:(struct CGPoint *)arg3 maximum:(struct CGPoint *)arg4;
- (BOOL)containsContour:(id)arg1;
- (id)debugPathForJointsOfContour:(id)arg1;
- (id)debugPathForContainmentOfContour:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (id)debugPathForContainmentOfContour:(id)arg1;
- (id)closestCrossingToPoint:(struct CGPoint)arg1;
- (id)closestLocationToPoint:(struct CGPoint)arg1;
- (int)contourInsides:(id)arg1;
@property(readonly, nonatomic) struct CGRect bounds;
- (void)insertSelfCrossings;
- (void)insertContourSelfCrossings;
- (BOOL)isIntersection:(id)arg1 atJoinOfEdge:(id)arg2 andEdge:(id)arg3;
- (void)removeDuplicateCrossings;
- (void)removeCrossingsInOverlaps;
- (void)cleanupCrossingsWithBezierGraph:(id)arg1;
- (void)insertCrossingsWithBezierGraph:(id)arg1;
- (id)bezierPathWithClass:(Class)arg1;
- (id)bezierPath;
- (id)xorWithBezierGraph:(id)arg1;
- (void)markSelfCrossingsAsEntryOrExit;
- (void)markCrossingsAsEntryOrExitWithBezierGraph:(id)arg1 markInside:(BOOL)arg2;
- (void)differenceEquivalentNonintersectingContours:(id)arg1 withContours:(id)arg2 results:(id)arg3;
- (id)differenceWithBezierGraph:(id)arg1;
- (void)intersectEquivalentNonintersectingContours:(id)arg1 withContours:(id)arg2 results:(id)arg3;
- (void)intersectNonintersectingPartsIntoGraph:(id)arg1 withGraph:(id)arg2;
- (id)intersectWithBezierGraph:(id)arg1;
- (void)unionEquivalentNonintersectingContours:(id)arg1 withContours:(id)arg2 results:(id)arg3;
- (void)unionNonintersectingPartsIntoGraph:(id)arg1 withGraph:(id)arg2;
- (id)unionWithBezierGraph:(id)arg1;
- (id)convertToEvenOddWindingRule;
- (id)init;
- (id)initWithBezierPath:(id)arg1;
@end
