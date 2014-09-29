@interface MSEventHandlerManager : NSObject
{
id _delegate;	// 8 = 0x8
BCUndoManager *_undoManager;	// 16 = 0x10
long long _lastMouseDownClickCount;	// 24 = 0x18
unsigned long long _lastEventType;	// 32 = 0x20
MSNormalEventHandler *_normalHandler;	// 40 = 0x28
MSEventHandler *_secondHandler;	// 48 = 0x30
}
@property(retain, nonatomic) MSEventHandler *secondHandler; // @synthesize secondHandler=_secondHandler;
@property(retain, nonatomic) MSNormalEventHandler *normalHandler; // @synthesize normalHandler=_normalHandler;
@property(nonatomic) unsigned long long lastEventType; // @synthesize lastEventType=_lastEventType;
@property(nonatomic) long long lastMouseDownClickCount; // @synthesize lastMouseDownClickCount=_lastMouseDownClickCount;
@property(retain, nonatomic) BCUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)recordEvent:(id)arg1;
- (void)sendMouseMovedEvent:(id)arg1;
- (void)sendMouseUpEvent:(id)arg1;
- (void)sendMouseDraggedEvent:(id)arg1;
- (void)sendMouseDownEvent:(id)arg1;
- (id)setCurrentHandler:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)setCurrentHandler:(id)arg1;
- (id)setCurrentHandlerKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)setCurrentHandlerKey:(id)arg1;
- (id)toggleHandlerKey:(id)arg1;
- (id)defaultHandler;
- (id)handlerForKey:(id)arg1;
- (id)currentHandlerKey;
- (id)currentHandler;
- (void)drawInRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 undoManager:(id)arg2;
@end
