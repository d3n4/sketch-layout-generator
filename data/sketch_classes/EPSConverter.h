@interface EPSConverter : NSObject
{
CDUnknownBlockType _progressBlock;	// 8 = 0x8
}
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (void).cxx_destruct;
- (void)converterReleased;
- (void)converterMessage:(id)arg1;
- (void)converterProgress;
- (void)endPageNumber:(unsigned long long)arg1 info:(id)arg2;
- (void)beginPageNumber:(unsigned long long)arg1 info:(id)arg2;
- (void)endDocumentSucceeded:(_Bool)arg1;
- (void)beginDocument;
- (BOOL)convertEPSWithProvider:(struct CGDataProvider *)arg1 consumer:(struct CGDataConsumer *)arg2;
- (id)convertEPSAtURL:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)convertEPSData:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)convertEPSAtURL:(id)arg1 toURL:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)init;
@end
