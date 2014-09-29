@interface FBBezierOperationChain : NSObject
{
NSMutableArray *_operands;	// 8 = 0x8
}
- (void).cxx_destruct;
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;
- (void)saveWithName:(id)arg1;
- (id)archive;
- (void)appendBezierPath:(id)arg1 withOperation:(int)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithBezierPath:(id)arg1;
- (id)init;
@end
