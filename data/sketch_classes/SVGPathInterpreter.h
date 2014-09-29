@interface SVGPathInterpreter : NSObject
{
BOOL _lastCommand;	// 8 = 0x8
struct CGPoint _lastPoint;	// 16 = 0x10
struct CGPoint _lastControl;	// 32 = 0x20
}
+ (id)bezierPathFromPoints:(id)arg1;
+ (id)bezierPathFromCommands:(id)arg1 isPathClosed:(char *)arg2;
@property(nonatomic) BOOL lastCommand; // @synthesize lastCommand=_lastCommand;
@property(nonatomic) struct CGPoint lastControl; // @synthesize lastControl=_lastControl;
@property(nonatomic) struct CGPoint lastPoint; // @synthesize lastPoint=_lastPoint;
- (void)appendAComponents:(id)arg1 toBezierPath:(id)arg2;
- (void)appendaComponents:(id)arg1 toBezierPath:(id)arg2;
- (void)appendvComponents:(id)arg1 toBezierPath:(id)arg2;
- (void)appendhComponents:(id)arg1 toBezierPath:(id)arg2;
- (void)appendVComponents:(id)arg1 toBezierPath:(id)arg2;
- (void)appendHComponents:(id)arg1 toBezierPath:(id)arg2;
- (void)appendsComponents:(id)arg1 toBezierPath:(id)arg2;
- (void)appendTComponents:(id)arg1 toBezierPath:(id)arg2;
- (void)appendtComponents:(id)arg1 toBezierPath:(id)arg2;
- (void)appendQComponents:(id)arg1 toBezierPath:(id)arg2;
- (void)appendqComponents:(id)arg1 toBezierPath:(id)arg2;
- (struct CGPoint)lastControlReflected;
- (void)appendCurveQuadPoint1:(struct CGPoint)arg1 quadPoint2:(struct CGPoint)arg2 toBezierPath:(id)arg3;
- (void)appendcComponents:(id)arg1 toBezierPath:(id)arg2;
- (void)appendlComponents:(id)arg1 toBezierPath:(id)arg2;
- (void)appendmComponents:(id)arg1 toBezierPath:(id)arg2;
- (void)appendSComponents:(id)arg1 toBezierPath:(id)arg2;
- (void)appendCComponents:(id)arg1 toBezierPath:(id)arg2;
- (void)appendLComponents:(id)arg1 toBezierPath:(id)arg2;
- (void)appendMComponents:(id)arg1 toBezierPath:(id)arg2;
- (id)bezierPathFromCommands:(id)arg1 isPathClosed:(char *)arg2;
- (id)bezierPathFromPoints:(id)arg1;
@end
