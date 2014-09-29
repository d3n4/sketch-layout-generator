@interface MSImportInsertExistingDocument : MSImportInsert
{
NSArray *_oldLayers;	// 8 = 0x8
}
@property(copy, nonatomic) NSArray *oldLayers; // @synthesize oldLayers=_oldLayers;
- (void).cxx_destruct;
- (id)insertedLayers;
- (struct CGPoint)mouseInCanvas;
- (struct CGPoint)offsetForNewLayers:(id)arg1 forMouse:(struct CGPoint)arg2;
- (void)moveNewLayersUnderMouse;
- (void)importerDidFinish;
- (void)runWithCompletion:(CDUnknownBlockType)arg1;
@end
