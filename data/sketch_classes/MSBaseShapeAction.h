@interface MSBaseShapeAction : MSBaseAction
{
}
+ (id)insertShapeLayer:(id)arg1 identifier:(id)arg2 document:(id)arg3;
- (id)label;
- (id)insertShape;
- (id)shapeForInsertion;
- (void)performAction:(id)arg1;
- (id)tooltip;
- (BOOL)isSelectable;
- (id)recipeName;
@end
